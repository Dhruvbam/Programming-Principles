#include <stdio.h>
#include <string.h>
 
void Palindrome_check(char word[], int index)
{
    int len = strlen(word) - (index + 1);
    if (word[index] == word[len])
    {
        if (index + 1 == len || index == len)
        {
            printf("yes");
            return;
        }
        Palindrome_check(word, index + 1);
    }
    else
    {
        printf("no");
    }
}
 
int main()
{
    char str[25];
 
    printf("Enter string: \n");
    scanf("%s", str);
    for(int i = 0; str[i]; i++)
	{
	    str[i] = tolower(str[i]);
	}
    Palindrome_check(str, 0);
    return 0;
}
 
