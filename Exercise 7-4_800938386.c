#include <stdio.h>
    
int contains_negative(int arr[], int size);
    
   int main() { 
       
       int arr[5];
       int i;
       
       printf("Enter 5 numbers for the array: ");
       scanf("%d", &arr[i]);
       
       //for (i = 0; i > 5; i++) {
           if (arr[i] < 0) {
               printf("0");
           }
           else {
               printf("1");
           }
    //}
           return 0;
}