#include <stdio.h>
int main() {

    char str[40];
    puts("Enter a string: ");
    gets(str);

    int size = 0;
    int i = 0;

    while(str[i] != '\0')
    {
      size++ ;
      i++;
    }
    puts("The size of string is:" );
    printf("%d\n", size);

    for(int i=0, j=size-1; i<=j; i++,j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts("The reverse string is: ");
    puts(str);
    return 0;
}