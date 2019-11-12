
//#include <iostream>
#include <stdio.h>
#include <stdlib.h>

void Swap(int a, int b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}

int main()
{
  int a = 5, b = 10;
  Swap(a,b);
  printf("%d\n",a);
  printf("%d\n",b);
}
