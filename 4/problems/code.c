// Written by: someone too ashamed to actually put their name here
// Determines if the user is in highschool or not. 

#include <stdio.h>

#define FIRST_HIGHSCHOOL_YEAR 7
#define LAST_HIGHSCHOOL_YEAR 12

int main(void) {
    
    printf("What year are you in? ");
    int year = 0;
    scanf("%d", &year);
    
    if (year >= FIRST_HIGHSCHOOL_YEAR && year <= LAST_HIGHSCHOOL_YEAR) {
    
        printf("You are in high school\n");
        
    } else {
    
        printf("You are not in high school\n");
        
    }
    
    return 0;
}
