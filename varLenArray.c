#include <stdio.h>


#include <stdio.h>
int main()
{
    int size=0;
    printf("Enter num ele:");
    scanf("%d", &size);

    char alpha[size];
    int x = 0;

    while(x < size)
    {
        alpha[x] = 'A' + x;
        putchar(alpha[x]);
        x++;
        if( x > 26 )
            break;
    }
    putchar('\n');

    return(0);
}