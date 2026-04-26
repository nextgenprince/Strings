#include <stdio.h>
#include <string.h>
int main() {

    char str[40];
    scanf("%s", str); // no ampersand here 
    // While taking input using scanf only first word is considered.
    // Space bar is read as end of statement.
    printf("Your input is :%s", str);

    return 0;
}