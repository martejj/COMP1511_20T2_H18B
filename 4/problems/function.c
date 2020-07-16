#include <stdio.h>

int is_even(int number);

int main(void) {
    
    printf("%d\n", 1);
    
}

int is_even(int number) {
    
    int returnValue;
    
    if (number%2 == 0) {
        returnValue = 1;
    } else {
        returnValue = 0;
    }
    
    return returnValue;
}
