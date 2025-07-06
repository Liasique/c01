#include <stdio.h>

int	ft_strlen(char *str)
{
    int	count = 0;

    while (str[count])
        count++;
    return count;
}

int	main(void)
{
    char *text = "Hi,1234567";
    int length = ft_strlen(text);

    printf("String: \"%s\"\n", text);
    printf("Length of string: %d\n", length);

    return 0;
}
