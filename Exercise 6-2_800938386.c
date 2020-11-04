#include <stdio.h>

unsigned int bitnumber (unsigned int j) {
    int i = 0;
    
    while (j)
    {
        i += j & 1;
        j >>= 1;
    }
    return i;
}
int main() {
    
    int j;
    
    printf("Enter a number: ");
    scanf("%d", &j);
    
    printf("The number of 1's in your number is: %d\n", bitnumber(j));
    
    return 0;
}
