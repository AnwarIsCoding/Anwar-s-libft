#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    char c;
    if (n < 0)
    {
        if (n == -2147483648)
            write(fd, "-2147483648", 11);
        else 
        {
            n *= -1;
            write(1, "-", 1);
        }
    }
    if (n >= 10)
    {
        ft_putnbr_fd(n % 10, fd);
        ft_putnbr_fd(n / 10, fd);
    }
    else
    {
    c = n + '0';
    write (fd, &c, 1);
    }
}
/*
#include <stdio.h>
#include <limits.h>
int main()
{
    //printf("%d\n", INT_MIN);
    ft_putnbr_fd(0, 1);
}
*/