#include <stdio.h>
int main() {

    char str[] = "PHYSICSWALLAH"; //it automatically stores \0
    int x= sizeof(str);
    printf("%d",x);
    return 0;
}