#include <unistd.h>
#include <stdio.h>
#include <setjmp.h>
#include <signal.h>

jmp_buf j;

void try()
{
    printf("call try\n");
    while (1) {
        sleep(5);

        printf("throw exception\n");
        int exception_no = 2;
        longjmp(j, exception_no);
    }
}

void catch(exception_no)
{
    printf("call catch\n");
    printf("catch exception: %d\n", exception_no);
}

void finally()
{
    printf("call finally\n");
}

void error_handler(int sig)
{
    longjmp(j, 1);
}

int main()
{
    int eno;
    if ((eno = setjmp(j)) > 0) {
        printf("main eno > 0\n");
        catch(eno);
    } else {
        printf("main eno = %d\n",eno);
        signal(SIGINT, error_handler);
        try();
    }
    finally();
    return 0;
}