#include<stdio.h>
void fun(){
  printf("Bye!");
}
int main(){
  void greet();
  greet();
  fun();
  return 0;
}
void greet(){
  printf("Hello\n");
}
