#include <stdio.h>
#include <string.h>

int main() {

    char arr[30] = "HII ";
    char brr[] = "I am Prince";

    strcat(arr,brr);
    printf("%s", arr);
}