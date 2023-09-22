#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

# define BUFFER_SIZE 20

char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strjoin_free(char const *s1, char const *s2, int size);
char	*ft_substr_edit(char const *s, int start, int len, int free_flag);
int		ft_strchr_edit(const char *s, int c);
int		ft_strlen_gnl(const char *str);
char	*get_next_line(int fd);
void	funzione_while(char *s, char *sub, int len, int start);

#endif
