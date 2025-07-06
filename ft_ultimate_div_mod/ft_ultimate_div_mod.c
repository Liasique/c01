#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
    int	temp = *a;

    *a = *a / *b;
    *b = temp % *b;
}

int main(void)
{
    int a = 10;
    int b = 3;

    printf("Before: a = %d, b = %d\n", a, b);
    ft_ultimate_div_mod(&a, &b);
    printf("After: a = %d, b = %d\n", a, b);

    return 0;
}
