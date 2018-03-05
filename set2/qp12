#include <stdio.h>
#include <math.h>
int main()
{
    int n,i=1,remain,divider,a[10],j;
    scanf("%d",&n);
    if(n>0)
    {divider=n;
        do
    {
    remain=divider%10;
    divider=divider/10;
    a[i]=remain;
    i++;
    }while(divider>0);
    }
    for(j=1;j<i/2;j++)
    {
        if(a[j]==a[i-j]) continue;
        else break;
    }
    if(j==i/2) 
       { printf("yes");}
    else printf("no");
    return 0;
    }
