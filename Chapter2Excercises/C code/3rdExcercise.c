// write a function that takes in a string of hexadecimal digits and returns the equivalent int value
// int htoi(s){}

// allowable digits are 0-9, a-f and A-F

#include <stdio.h>
#include <string.h> //this will give us functions for strings such as strlen() which is basically array length
#include <ctype.h>  //we'll use this one because it has functions that can let us confirm the type of char passed in (digit, or letter etc)

int htoi(char s[]); // function declaration

int main(void)
{
    char *hex = "1A2F";
    int decimal = htoi(hex);

    printf("Hexadecimal: %s\n", hex);
    printf("decimal: %d\n", decimal);
    return 0;
}

int htoi(char s[])
{
    int result = 0;
    int len = strlen(s);
    int i = 0;

    // Skip leading white spaces
    while (isspace(s[i]))
    {
        i++;
    }

    // Check for optional "0x" or "0X" prefix (we dont coun't it)
    if (s[i] == '0' && (s[i + 1] == 'x' || s[i + 1] == 'X'))
    {
        i += 2;
    }

    // Process each character in the string
    while (i < len) //the remaining indexes are less than length
    {
        char c = tolower(s[i]);
        int digit;

        // Convert hex digit to integer value
        if (isdigit(c))
        {
            digit = c - '0';
        }
        else if (c >= 'a' && c <= 'f')
        {
            digit = c - 'a' + 10;
        }
        else
        {
            return 0;
        }

        // Update the result
        result = (result * 16) + digit;

        i++;
    }

    return result;
}