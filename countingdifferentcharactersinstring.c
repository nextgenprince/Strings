#include <stdio.h>

int main() {

    char a[] = "I am Prince 19 Kumar";

    int vowels = 0;
    int digits = 0;
    int space_count = 0;
    int consonants = 0;
    int words = 0;

    for(int i=0; a[i]!='\0'; i++)
    {
      if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' 
        || a[i] == 'A' || a[i] == 'E' || a[i] == 'O' || a[i] == 'I' || a[i] == 'U')
          
        vowels++;

        else if(a[i] >='0' && a[i] <='9')
        
        digits++;

        else if(a[i] == ' ')

        space_count++;

        else
        consonants++;
 }
    words =space_count+1;

    printf("Vowel count is:%d\n", vowels);
    printf("Digits count is:%d\n", digits);
    printf("Space count is:%d\n", space_count);
    printf("Consonants count is:%d\n", consonants);
    printf("Words count is:%d", words);

    return 0;
}