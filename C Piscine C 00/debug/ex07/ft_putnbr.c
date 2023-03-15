#include <unistd.h>

void    ft_putnbr(int nb)
{
    long    mb;
    char    c[10];
    short   s;
    
    mb = nb;
    s = 0;
    if (nb == 0)
    {
        write(1, "0", 1);
        return;
    }
    if (mb < 0)
    {
        mb = mb * -1;
        write(1, "-", 1);
    }
    while (mb > 0)
    {
        c[s++] = (mb % 10) + '0';
        mb = mb /10;
    }
    while (s >= 1)
    {
        write(1, &c[--s], 1);
    }
}
