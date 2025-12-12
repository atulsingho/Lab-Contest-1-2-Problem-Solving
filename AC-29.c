#include <stdio.h>

int main() {
    char X;
    if (scanf(" %c", &X) != 1) {
        return 1; 
    }

    char converted_char;
    if (X >= 'a' && X <= 'z') {
      
        converted_char = X - 32;
    } 
   
    else if (X >= 'A' && X <= 'Z') {
    
        converted_char = X + 32;
    } else {
        converted_char = X;
    }

    printf("%c\n", converted_char);

    return 0;
}
