int main(void) {
  int n,sum,n1,n2,m,i;
  scanf("%d",&n);
  scanf("%d",&m);
  for(i=n;i<=m;i++)
  {sum=0;
  n1=i;
  do
  {
    n2=n1%10;
    n1=n1/10;
    sum=sum+pow(n2,3);
      }while(n1>0);
  if(i==sum)
  printf("%d\t",i);
  }
  return 0;
}
