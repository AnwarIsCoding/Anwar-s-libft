#ifdef LIBFT_H
#define  LIBFT_H

/* PART 1 */
int ft_atoi(char *str);
int ft_isalpha(char *str);
int ft_isdigit(char *str);
int ft_isalnum(char *str);
int ft_isascii(int c);
int ft_isprint(int c);
void *ft_memset(void *str, int c, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memove(void *dest, const void *src, size_t n);
size_t ft_strlcpy(char *restrict dest, const char *restrict src, size_t dsize);
size_t ft_strlcat(char *restrict dst, const char *restrict src, size_t dsize);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(char *str, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(void *str, int c, size_t n);
char *ft_strnstr(const char *big, const char *little, size_t len);
char *ft_strnstr(const char *big, const char *little, size_t len);
void *ft_calloc(size_t data_size, size_t num_elements);
char *ft_strdup(const char *str);

/* PART 2 */
char *ft_strjoin(char const *s1, char const *s2);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char *str, char *charset);
char *ft_itoa(int n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_striteri(char *s, void (*f)(unsigned int, char*));
void ft_putstr_fd(char *str, int fd);
void ft_putstr_fd(char *str, int fd);
void ft_putnbr_fd(int n, int fd);

#endif