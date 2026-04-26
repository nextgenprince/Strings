#include <stdio.h>
#include<string.h>

int main() {

    char a[] = "PRINCE";
    int size = strlen(a);
    int temp = 0;
    for(int i=0,j = size-1; i <= j; i++,j--)
    {
       if(a[i] != a[j])
       {
        printf("It is not a Palindrome");
        temp++;
        break;
       }
        
    }
    if(temp==0)
    printf("It is a palindrome");
    return 0;
}