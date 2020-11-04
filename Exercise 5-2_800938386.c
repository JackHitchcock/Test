#include <stdio.h>

int main() {
    
    int a;
    int b;
    int asterisk;
    
    printf("Enter the desired number of asterisks : ");
    scanf("%d", &asterisk);
    
    for (int a = asterisk; a >= 1; --a) { 
        for (int b = 1; b <= a; ++b) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}