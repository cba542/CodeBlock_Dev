//#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "main.h"


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** fizzBuzz(int n){
    char **str = (char **)malloc(sizeof(char *) * n);
    for(int i = 0; i < n; i++)
      str[i] = (char *)malloc(sizeof(char) * 9);
    for(int i = 0; i < n; i++)
    {

        if(i == 0){
          sprintf(str[i], "%d", i+1);
          continue;
        }
        if((i+1) % 3 == 0 && (i+1) % 5 == 0){
          strcpy(str[i], "FizzBuzz");
          continue;
        }
        if((i+1) % 3 ==0){
          strcpy(str[i], "Fizz");
          continue;
        }
        if((i+1) % 5 == 0){
          strcpy(str[i], "Buzz");
          continue;
        }
        sprintf(str[i], "%d", i+1);
    }
    return str;
}



int main()
{
    printf("%d\n",sizeof(char *));
  char **str = (char **)malloc(sizeof(char *) * 15);

  str = fizzBuzz(15);
  for(int i =0; i < 15; i++)
    printf("%s\n",str[i]);
    //printf("%s\n",*(str[i]));

}
