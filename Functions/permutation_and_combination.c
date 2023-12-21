#include<stdio.h>
int main()
{
  int n;
  printf( "Enter a number(n): ");
  scanf( "%d", &n);
  int r;
  printf( "Enter a number(r): ");
  scanf( "%d", &r);
  int nfact=1;
  int rfact=1;
  int nrfact=1;
  for(int i=2;i<=n;i++){
    nfact=nfact*i;
  }
  for(int i=2;i<=r;i++){
    rfact=rfact*i;
  }
  for(int i=2;i<=(n-r);i++){
    nrfact=nrfact*i;
  }
  int nCr=nfact/(rfact*nrfact);
  printf( "nCr= %d", nCr);
  return 0;
  return 0;
}