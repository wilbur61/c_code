#include<stdio.h>
#include <stdbool.h> // Header-file for boolean data-type.
int main() {  
    bool x=false;  // Declaration and initialization of boolean variable.
    if (x==true) {  // Conditional statement.    
        printf("The value of x is true \n");  
    } else {  
        printf("The value of x is false \n");  
    }
    
    return 0;  
    // Output: The value of x is false
}