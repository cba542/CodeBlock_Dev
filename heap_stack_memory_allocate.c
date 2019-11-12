#include "main.h"

//global int hash[700000000];

int a = 1;



int main()
{
  static int b = 2;
  int c = 7;
  int  d[5];
  int  e[5] = {1,2,3,4,5};
  int *f = malloc(sizeof(int) * 5);
  int *g;

  printf("&a = %x\n",&a);
  printf("&b = %x\n",&b);
  printf("&c = %x\n",&c);
  printf("&d = %x\n",&d);
  printf("&e = %x\n",&e);
  printf("f = %x\n",f);
  printf("g = %x\n\n",g);

  g = (int *)malloc(sizeof(int) * 5);

  printf("&a = %x\n",&a);
  printf("&b = %x\n",&b);
  printf("&c = %x\n",&c);
  printf("&d = %x\n",&d);
  printf("&e = %x\n",&e);
  printf("f = %x\n",f);
  printf("g = %x\n\n",g);

}

