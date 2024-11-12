#include <stdio.h>
#include <string.h>


// Encrypt function
char *encrypt(char *str)
{
    // loop through each character of the string
    for(int i = 0; str[i] != '\0'; i++)
        // add 20 to each character in the string
        str[i] += 20;

    // return the encrypted string
    return str;
}

// Decrypt function
char *decrypt(char *str)
{
    // loop through each character of the string
    for(int i = 0; str[i] != '\0'; i++)
        // subtract 20 from each character in the string
        str[i] -= 20;

    // return the decrypted string
    return str;
}

// main function
int main()
{
    //Variables
    char string[255];
    char *encrypted, *decrypted;

    // take an input string to be encrypted from the user
    printf("Enter a string to be encrypted: ");
    gets(string);

    // invoke the encrypt() function with the input string
    encrypted = encrypt(string);
    // print the encrypted message
    printf("\nThe encrypted message is: %s\n", encrypted);

    // invoke the decrypt() function with the encrypted string
    decrypted = decrypt(encrypted);
    // print the decrypted message
    printf("\nThe decrypted message is: %s\n", decrypted);

    return 0;
}



