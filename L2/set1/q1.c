#include <stdio.h>
int main()
{
   char arr[100],rev[100];
   int count,end,begin;
    printf("Enter a string to reverse\n");
   scanf("%s",arr);
   while (arr[count] != '\0')
      count++;
 
   end = count - 1; 
    for (begin = 0; begin < count; begin++) {
      rev[begin] = arr[end];
      end--;
   }
 
   rev[begin] = '\0';
 
   printf("%s\n", rev);
    return 0;
}
