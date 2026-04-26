#include <stdio.h>

int main() {

    char str[14] = "PHYSICSWALLAH";

    str[0] = 'M';
    str[1] = 65; // taking ascii value of 65
    int i=0;
    while(str[i] != '\0')
    {
        printf("%c",str[i]);
        i++;
    }
}