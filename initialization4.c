#include <stdio.h>
int main() {

    char arr[14] = "PHYSICSWALLAH";

    int i=0;
    while(arr[i] != '\0')
    {
        printf("%c",arr[i]);
        i++;
    }
}