//#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/*

Write a program that outputs the string representation of numbers from 1 to n.

But for multiples of three it should output “Fizz” instead of the number and for the multiples of five output “Buzz”. For numbers which are multiples of both three and five output “FizzBuzz”.

Example:

n = 15,

Return:
[
    "1",
    "2",
    "Fizz",
    "4",
    "Buzz",
    "Fizz",
    "7",
    "8",
    "Fizz",
    "Buzz",
    "11",
    "Fizz",
    "13",
    "14",
    "FizzBuzz"
]

*/


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char ** fizzBuzz(int n){
    char **str = (char **)malloc(sizeof(char *) * n);
    //It will occurred error str[i] = (char *)malloc(sizeof(char) * 8); , because "FizzBuzz" + '\n' at least need 9 bytes
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
  //printf("%d\n",sizeof(char *));
  char **str = (char **)malloc(sizeof(char *) * 15);

  str = fizzBuzz(15);
  for(int i =0; i < 15; i++)
    printf("%s\n",str[i]);


}
