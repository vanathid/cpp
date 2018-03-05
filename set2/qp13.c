#include <stdio.h>
#include <math.h>
int main()
{
    int n,j,i;
    scanf("%d",&n);
    if(n>0)
    {i=n;
    for(j=2;j<i/2;j++)
    {
        if(n%j==0) break;
        else continue;
    }
    if(j==i/2) 
       { printf("yes");}
    else printf("no");
    }
    return 0;
    }
