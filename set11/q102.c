#include <stdio.h>
int main(void) {
int n;
scanf("%d",&n);
while(n%2==0){
	 n=n/2;
}
	printf("%d",n);
	return 0;
}
