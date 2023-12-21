#include<stdio.h>
#include<math.h>
int main(){
  float n;
  printf("Enter a number: ");
  scanf(" %f",&n);

  float root= sqrt(n);
  printf( "The square root of %f is %f",n,root);

  return 0;
}