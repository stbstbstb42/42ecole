#include "../includes/minishell.h"

void	ft_exit_command( t_mini *mini, char **cmd)
{
	(void)mini;
	(void)cmd;
	ft_putendl_fd("exit", 1);
	mini->exit = 1;
}
