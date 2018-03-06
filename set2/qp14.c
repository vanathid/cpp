#include <stdio.h>
#include <math.h>
int main()
{
    int n,m,j;
    scanf("%d%d",&n,&m);
    if(n%2==0) n=n+1;
    else n=n+2;
    for(j=n;j<m;j=j+2)
    {
        printf("%d\t",j);
    }
    
    return 0;
    }
