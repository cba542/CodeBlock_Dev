#include "main.h"

typedef struct Int_Type2{
  int e;
  int f;
}Int_Type2;

typedef struct Int_Type1{
  int c;
  int d;
  Int_Type2;
}Int_Type1;

typedef struct Rad_Type{
  int a;
  int b;
  Int_Type1 x;
}Rad_Type;



int main()
{
  Rad_Type Rad1 = {1,2};
  Rad_Type *ptr = &Rad1;
  printf("Rad_Type Rad1 = {1,2}\n");
  printf("Rad_Type *ptr = &Rad1\n");

  printf("ptr->a = %x\n",ptr->a);
  printf("ptr->b = %x\n",ptr->b);

  printf("&ptr->a = %x\n",&ptr->a);
  printf("&ptr->b = %x\n",&ptr->b);

  printf("Assign value\n");
  ptr->a = 3;
  ptr->b = 4;
  ptr->x.c = 5;

  printf("ptr->a = %x\n",ptr->a);
  printf("ptr->b = %x\n",ptr->b);

  printf("ptr->x.c = %x\n",ptr->x.c);
  printf("&ptr->a = %x\n",&ptr->a);
  printf("&ptr->b = %x\n",&ptr->b);
  printf("&ptr->x.c = %x\n",&ptr->x.c);



    return 0;

}
