int ft_isalnum(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        if ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            i++;
        else 
            return 0;
    }
    return 1;
}