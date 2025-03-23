int ft_strlen(char *str)
{
    int length = 0;

    // Iterate through the string until the null terminator is found
    while (str[length] != '\0')
    {
        length++;
    }

    return length;
}

#include <stdio.h>

int main()
{
    char *str = "Hello, World!";
    int len = ft_strlen(str);

    printf("Length of the string: %d\n", len);  // Output: Length of the string: 13
    return 0;
}
