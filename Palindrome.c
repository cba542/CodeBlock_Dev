/*


A palindrome is a word that reads the same backward or forward.

Write a function that checks if a given word is a palindrome. Character case should be ignored. If the given word is a palindrome, the function should return 1; otherwise it should return 0.

For example, is_palindrome("Deleveled") should return 1 as character case should be ignored resulting with "deleveled" which is a palindrome since it reads same backward and forward.

*/
#include <stdlib.h>
#include <stdio.h>

int is_palindrome(char *str)
{
    int len = strlen(str);
    int j = (len-1);
    for(int i = 0; i < len; i++)
    {
        if(str[i] != str[j])
        {
            if(str[i] != (str[j] + 32) )
            if(str[i] != (str[j] - 32) )
              return 0;
        }
      j--;
    }
    return 1;
}

#ifndef RunTests
int main()
{
    //char *str = "Deleveled";
    char *str = "Dvd";
    printf("%d", is_palindrome(str));
}
#endif
