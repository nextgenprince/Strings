#include <stdio.h>

int main() {
    int arr[4] = {1,2,3,4}; // int takes 4 bytes = 32 bits
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    
    
char a[4] = {'a','t','l','a'};
printf("%p\n",&a[0]); //char takes 1 byte
printf("%p\n",&a[1]);
printf("%p\n",&a[2]);
printf("%p\n",&a[3]);

}
