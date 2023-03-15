#include <unistd.h>

void ft_print_comb2(void)
{
    int i;
    int j;
    char    c[6];
    
    i = 0;
    c[2] = ' ';
    c[5] = ',';
    while(i < 98)
    {
        j = i + 1;
        while(j <=99)
        {
            c[0] = i / 10 + '0';
            c[1] = i % 10 + '0';
            c[3] = j / 10 + '0';
            c[4] = j % 10 + '0';
            write(1, &c, 6);
            ++j;
        }
        ++i;
    }
    write(1, "98 99",5);
}
