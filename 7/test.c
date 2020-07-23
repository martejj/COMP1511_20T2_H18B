#include <stdio.h>

struct chars {
    unsigned char a;
    unsigned char b;
    unsigned char c;
    unsigned char d;
};

union charsToInts {
    unsigned int integer;
    struct chars characters;
};
// 137388225
int main(void) {
    
    union charsToInts input;
    
    scanf("%d", &(input.integer));
        
    char string[] = {input.characters.d, input.characters.c, input.characters.b, input.characters.a};
    
    printf("%d\n", string[0]);
    printf("%d\n", string[1]);
    printf("%d\n", string[2]);
    printf("%d\n", string[3]);
    
    return 0;

}
