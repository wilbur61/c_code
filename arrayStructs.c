#include <stdio.h> 
#include <string.h>   
struct student {   
  int rollno;   
  char name[10];   
};  

int main() {
    int i;   
    struct student st[2];   
    printf("Enter Records of 2 students");

    for(i = 0; i < 2; i++) {  
        printf("\nEnter Rollno:");   
        scanf("%d",&st[i].rollno);   
        printf("\nEnter Name:");   
        scanf("%s",&st[i].name);  
    }
    
    printf("\nStudent Information List:");  
    for(i = 0; i < 2; i++) {   
        printf("\nRollno:%d, Name:%s",st[i].rollno,st[i].name);
    }
    
 return 0;
}