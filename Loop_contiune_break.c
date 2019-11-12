#include "main.h"




int main()
{

  for(int i = 0; i < 10 ; i++)
  {

      if(i == 3)
      continue;
      if(i == 7)
      break;
      printf("i = %d\n",i);
  }

}


