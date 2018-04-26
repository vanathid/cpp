int main(void) {
  int n,sum,m1,m2,m,i;
  scanf("%d",&n);
  scanf("%d",&m);
  for(i=n;i<=m;i++)
  {sum=0;
  m1=i;
  do
  {
    m2=m1%10;
    m1=m1/10;
    sum=sum+pow(m2,3);
      }while(m1>0);
  if(i==sum)
  printf("%d\t",i);
  }
  return 0;
}

