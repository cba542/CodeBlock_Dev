
#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int bitchange(int s, int d, int pos)
{
    int mod;
    int ret;
    mod = ((s >> pos) & 1);
    if(mod == 1){
      ret = (d | (1 << pos));
    }
    if(mod == 0){
      ret = (d & (~(1 << pos)));
    }



  return ret;
}

int main()
{
    //char exp[] = "231*+9-";
    char exp[] = "23+";
    printf ("postfix evaluation: %d", bitchange(15,37,3));
    return 0;
}

