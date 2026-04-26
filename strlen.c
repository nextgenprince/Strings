#include <stdio.h> 
#include <string.h>

 int main () {

    char arr[] = "HELLO WORLD";

    printf("Length = %lu\n", strlen(arr));
    int x = sizeof(arr);
    printf("The size of array is: %d", x);
 }