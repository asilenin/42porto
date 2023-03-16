#include    <unistd.h>

void    ft_print_combn(int  n);

int main(void)
{
    int n;
    
    n = 3;
    ft_print_combn(n);
    write(1, "\n", 1);
    return (0);
}
