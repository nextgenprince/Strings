#include <stdio.h>
#include <string.h>

char* strrev(char* arr) {
    int size = strlen(arr);
    for(int i=0, j=size-1; i<=j; i++,j--)
    {
      char temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
     return arr;
}

int main() {

    char arr[] = "I am Prince";
    char brr[40];
    
   // strcpy(brr,arr);
    strrev(arr);
    printf("%s",arr);
}