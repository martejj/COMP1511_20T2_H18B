#include <stdio.h>

#define MAX_SIZE 1000

void f(int x[1]) {
    x[0] = 10;
    
}

int main(void) {
    int x[1] = {0};
    f(x);
    // x[0] = 10
    
    int size = 0;
    printf("Enter how many you want to enter:");
    scanf("%d", &size);
    
    int inputs[size];
    
    int i = 0;
    
    while (scanf("%d", &inputs[i]) == 1) {
        printf("Thanks for entering %d\n", inputs[i]);
        i++;
    }
    
    printf("You entered %d nums\n", i);
    
}


