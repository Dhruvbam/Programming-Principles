#include <stdio.h>

int prime(int end)
{
    int i, x, y;
    for(i=2; i<=end; i++)
    {
        y = 1; 
        for(x=2; x<=i/2; x++)
        {
            if(i%x==0)
            {
                y = 0;
                break;
            }
        }
        if(y==1)
        {
            printf("%d\n", i);
        }
    }
}

int string_length(char *pointer)
{
   int c = 0;
 
   while( *(pointer+c) != '\0' )
      c++;
 
   return c;
}

void reverse(char *string) 
{
   int length, c;
   char *begin, *end, temp;
 
   length = string_length(string);
 
   begin = string;
   end = string;
 
   for ( c = 0 ; c < ( length - 1 ) ; c++ )
      end++;
 
   for ( c = 0 ; c < length/2 ; c++ ) 
   {        
      temp = *end;
      *end = *begin;
      *begin = temp;
 
      begin++;
      end--;
   }
}

int main()
{
    int end;
    printf("Q1 \n");
    printf("Find prime numbers up to : ");
    scanf("%d", &end);

    printf("All prime numbers between 1 to %d are:\n", end);
    prime(end);
  
    char string[50];
    printf("\nQ2\n");
    printf("Enter a string: ");
    scanf("%s", &*string);
    reverse(string);
    printf("Reverse of string is: %s", string);
    
    return 0;
}