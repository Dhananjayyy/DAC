#include <stdio.h>
#include <conio.h>
int getLength(char *);
int getSpaces(char *);
int getVowels(char *);
int main()
{
    int ch;
    char str[20] = "India is my country";
    // printf("Enter string: ");
    // scanf("%s",str);
    printf("Choose: \n1. Get number of Characters\
    \n2. Get number of Spaces\
    \n3. Get number of Vowels\
    \nEnter choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
    {
        printf("The length of the string is: %d ", getLength(str));
        break;
    }
    case 2:
    {
        printf("The number of spaces in the string are: %d ", getSpaces(str));
        break;
    }
    case 3:
    {
        printf("The number of spaces in the string are: %d ", getVowels(str));
        break;
    }
    }
}
int getLength(char *s)
{
    int count;
    while (*s != '\0')
    {
        count++;
        s++;
    }
    return count;
}
int getSpaces(char *s)
{
    int count;
    while (*s != '\0')
    {
        if (*s == ' ')
        {
            count++;
        }
        s++;
    }
    return count;
}
int getVowels(char *s)
{
    char vowels[11] = "aeiouAEIOU";
    int count;
    while (*s != '\0')
    {
        for (int i = 0; vowels[i] != '\0'; i++)
        {
            if (*s == vowels[i])
            {
                count++;
            }
        }
        s++;
    }
    return count;
}
