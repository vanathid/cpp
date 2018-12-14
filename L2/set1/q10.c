#include <stdio.h>
int main()
{
   char arr[100],rev[100];
   int count=0,count1=0,end,begin;
    printf("Enter a string to reverse\n");
   scanf("%s",arr);
    scanf("%s",rev);
   while (arr[count] != '\0')
      {count++;}
  while (rev[count1] != '\0')
      {count1++;}
    if (count>count1)
      count=count1;
    for (begin = 0; begin < count; begin++) {
      if(rev[begin] != arr[begin])
       end++;
         }
 if(end==1)
 printf("yes");
 else 
 printf("No");
   
    return 0;
}
