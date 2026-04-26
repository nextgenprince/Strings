#include <stdio.h>
int main() {

    char a[] = "I am Prince";
    char b[40];


    for(int i=0; a[i] != '\0'; i++)
    {
        b[i] = a[i];
    }
    printf("%s", b);
    return 0;

}