#include <stdio.h>
 #include<string.h>
int main()
{
    int i=0,j=0,index,len;
    char input[50],vstring[30],cstring[30],vowel;
scanf("%s",input);
len=strlen(input);
for(index = 0;index < len;index++){
    vowel=input[index];
    if( (vowel == 'a')||
        (vowel == 'e')||
        (vowel == 'i')||
        (vowel == 'o')||
        (vowel == 'u')){
            vstring[i]=vowel;
            i++;
            }
     else{
         cstring[j]=vowel;
         j++;
         }
     } 
    printf("%s",vstring);
    printf("%s",cstring);
return 0;
}
