#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: the string that's gonna be capitalized
 * Return: the the capitalized string
 */
char *cap_string(char *);

int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}

char *cap_string(char *str)
{
int i = 1;

if (*(str + 0) >= 97 && *(str + 0) <= 122)
{
*(str + 0) = *(str + 0) - 32;
}
while (*(str + i))
{
if (*(str + 1) == (32 || 9 || 44 || 59 || 46 || 33 || 63 || 34 || 40 || 41 || 123 || 125 || 10))
{
if (*(str + i + 1) >= 97 && *(str + i + 1) <= 122)
{
*(str + i + 1) = *(str + i + 1) - 32;
i++;
}
else
{
i++;
continue;
}
}
else
{
i++;
continue;
}
}
return (str);
}
