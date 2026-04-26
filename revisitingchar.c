#include <stdio.h>
int main() {

    char ch = '1';  //character 1 not int 1
    int x = (int)ch; //typecasting
    printf("%d\n", x);
    printf("%d",ch); //by changing the format specifier
}