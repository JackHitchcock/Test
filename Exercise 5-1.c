#include <stdio.h>

int main() {
    
    int a;
    int b;
    
    printf("Enter the number of lines (Max 8) : ");
    scanf("%d", &a);
    
    for (b = 0; b < a; b++) {
    putchar('*');
    putchar('\n');
    
    }
    return 0;
}