#include<stdio.h>

void showSomething(void);

int main(void)
{
  printf("hello world!");
  
  showSomething();
    
  return 0;
}

void showSomething(void){
  printf("Something");
}
