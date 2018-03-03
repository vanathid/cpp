#include <stdio.h>

int main()
{
    char check;
    scanf("%c",&check);
   if(isalpha(check)) 
    printf("Alphabet");
    else 
    printf("No");
    return 0;
    }
