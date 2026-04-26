#include <stdio.h>

int main() {

    char str[] = "Hii everyone, I am Prince";
    
    int size =0;
    for(int i=0; str[i]!='\0'; i++)
    {
      size++;
    }
    printf("%d",size);
}
