#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *s);
void	*ft_bzero(void *s, unsigned long int n);
char	*ft_strdup(const char *s1);
void	*ft_calloc(unsigned long int count, unsigned long int size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_itoa(int n);
int		ft_atoi(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, int (*f)(int));
int		ft_isdigit(int c);
char	*ft_strchr(const char *s, int c);

#endif
