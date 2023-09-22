#ifndef CHECKER_H

# define CHECKER_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include "../libft/libft.h"
# include "../push_swap.h"

int		ordered_stack(t_struct *data);
char	*get_next_line(int fd);
int		check_args(int argc, char *argv[]);
void	handle_arg(t_struct *data, char **nums, char *argv[], int i);
void	fill_args(t_struct *data, char *argv[], int argc);
void	free_all2(t_struct *data);
void	free_nbrs(char **nbrs);
int		ft_exit(char *str);

#endif