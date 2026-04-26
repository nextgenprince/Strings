#include <stdio.h>
int main() {

   /*char arr[5] = {'H','E','L','L','O'}; // not a good way

    for(int i=0; i<5; i++)
    {
      printf("%c", arr[i]);
    }
    return 0;
}*/
 char arr[ ] = {'H','E','L','L','O','\0'}; 

   int i=0;
   while(arr[i] != '\0'){
   printf("%c", arr[i]);
   i++;
}
}