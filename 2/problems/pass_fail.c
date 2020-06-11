#include <stdio.h>

int main(void) {
    
    double grade = 0;
    
    scanf("%lf", &grade);
    
    if (grade >= 50 && grade <= 100) {
    
        printf("PASS\n");
        
    } else if (grade >= 0 && grade < 50) {
    
        printf("FAIL\n");
        
    } else {
        
        printf("ERROR\n");   
        
    }    

    return 0;
}
