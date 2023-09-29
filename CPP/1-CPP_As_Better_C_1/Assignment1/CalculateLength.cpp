#include <stdio.h>
#include <string.h>
int getLength(char*);
int main()
{
    char* str;
    printf("Enter String: ");
    scanf("%s", str);
    printf("%d",getLength(str));
}

int getLength(char* s)
{
    int i, count = 0;
    for (i=0;s[i]!='\0';i++)
    {
        count++;
    }
    return count;
}