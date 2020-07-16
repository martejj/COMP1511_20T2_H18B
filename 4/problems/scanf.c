#include <stdio.h>

int main(void) {
    
    int scannedInInt = 0;
    int returnValue;
    
    returnValue = scanf("%d", &scannedInInt);
    
    if (returnValue == 1) {
        printf("Thanks for taking me seriously and entering proper data\n");
    } else {
        printf("Enter real data!\n");
    }
    
}
