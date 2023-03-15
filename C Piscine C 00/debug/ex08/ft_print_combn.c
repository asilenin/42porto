#include <unistd.h>
#include <stdio.h>


void    ft_print(int    n, int  m, char   c[n+1])
{
    int s;
    
    c[m] = 0;
    while (c[m] <= 9)
    {
        if ((m + 1) == n)
        {
            s = n;
            while (s >= 1)
            {
                write(1, &c[--s], 1);
            }
        }
        else
        {
            ft_print(n, (m + 1), c);
        }
        ++c[m];
    }
}

void    ft_print_combn(int  n)
{
    char    c[n+1];
    
    c[n] = ',';
    c[0] = 1;
    ft_print(n, 0, c);
}
