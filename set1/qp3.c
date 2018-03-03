#include <stdio.h>

int main()
{
    char check;
    scanf("%c",&check);
   if(isupper(check)) check=tolower(check);
   if(check=='a' ||check=='e'||check=='i'||check=='o'||check=='u')
    printf("vowels");
    else 
    printf("consonants");
    return 0;
    }
