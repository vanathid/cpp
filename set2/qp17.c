int main(void) {
  int n,sum=0,n1,n2;
  scanf("%d",&n);
  n1=n;
  do
  {
    n2=n1%10;
    n1=n1/10;
    sum=sum+pow(n2,3);
      }while(n1>0);
  if(n==sum)
  printf("yes");
  else
  printf("no");
  return 0;
}
