#include <stdio.h>
int main() {
    char arr[] ="HELLO WORLD";
    
   /* for(int i=0; i<20; i++)
    {
        printf("%c",arr[i]);
    }*/

    int i=0;
    while(arr[i] != '\0')
    {
      printf("%c", arr[i]);
      i++;
    }
    return 0;
}