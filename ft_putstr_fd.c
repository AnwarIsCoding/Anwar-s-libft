#include <unistd.h>

void ft_putstr_fd(char *str, int fd)
{
    int i;
    i = 0;
    while (str[i])
    {
        write(fd, str + i, 1);
        i++;
    }
}
/*
#include <stdio.h>
int main()
{
    FILE* ptr;
    ptr = fopen("test.txt", "w");
    char str[] = "anwar";
    ft_putstr_fd(str, 3);
}
*/