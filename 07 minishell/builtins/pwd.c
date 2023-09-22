#include "../includes/minishell.h"

void	ft_get_pwd(t_mini *mini)
{
	char	*wd;

	wd = getcwd(NULL, 0);
	if (wd)
	{
		ft_putendl_fd(wd, 1);
		free(wd);
		mini->ret = 0;
		return ;
	}
	free(wd);
	mini->ret = 1;
}
