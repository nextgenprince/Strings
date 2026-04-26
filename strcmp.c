#include <stdio.h>
#include <string.h>
int main() {

    char arr[] = "ABC";
    char brr[] = "ABD";
    char a[] = "PRINCE"; //comparision is case sensitive
    char b[] = "Prince";
   
   printf("%d\n",strcmp(arr,brr));
   printf("%d",strcmp(a,b));


return 0;
}