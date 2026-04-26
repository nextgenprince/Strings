#include <stdio.h>
#include <string.h>

int main() {

    char source[] = "MY NAME IS PRINCE KUMAR";
    char destination [100];

    strcpy(destination,source);
    printf("Your copied string is: %s", destination);

    return 0;
}