#include<stdio.h>
  int factorial(int x){
  int f=1;
    for(int i=2;i<=x;i++)
      f=f*i;
    return f;
  }
  int permutation(int n,int r){
    int nPr=factorial(n)/factorial(n-r);
    return nPr;
  }
  int main()
  {
    int n,r;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of r:");
    scanf("%d",&r);
    int nPr=permutation(n,r);
    printf("The value of nPr is %d",nPr);
    return 0;
  }
