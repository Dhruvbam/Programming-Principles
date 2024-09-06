#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//Funtion to count Uppercase Alphabets in the string
int uppercase_alp(char* str)
{
    int i=0;
    int uppercase_alp=0;
    while(str[i]!='\0')
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            uppercase_alp++;
        }
        i++;
    }
    
    return uppercase_alp;
}

//Funtion to count Lowercase Alphabets in the string
int lowercase_alp(char* str)
{
    int i=0;
    int lowercase_alp=0;
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            lowercase_alp++;
        }
        i++;
    }
    
    return lowercase_alp;
}

//Funtion to count Vowels in the string
int vowels(char* str)
{
    int i=0;
    int vowel=0;
    while(str[i]!='\0')
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || 
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel++;
        }
        i++;
    }
    
    return vowel;
}

//Funtion to count Digits in the string
int digits(char* str)
{
    int i=0;
    int digit=0;
    while(str[i]!='\0')
    {
        if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        i++;
    }
    
    return digit;
}


void main()
{
    char str[100];
    int alp, ucalp, lcalp, vowel, digit, conso;
    
    printf("Input the string : ");
    fgets(str, sizeof str, stdin);	
    
    ucalp = uppercase_alp(str);
    lcalp = lowercase_alp(str);
    vowel = vowels(str);
    digit = digits(str);
    alp = lcalp+ucalp;
    conso = alp-vowel;
    
    printf("The total number of alphabets: %d\n", alp);
    printf("The total number of digits: %d\n", digit);
    printf("The total number of lower case alphabets: %d\n", lcalp);
    printf("The total number of upper case alphabets: %d\n", ucalp);
    printf("The total number of vowels: %d\n", vowel);
    printf("The total number of consonants: %d\n", conso);
    
}