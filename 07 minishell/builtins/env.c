#include "../includes/minishell.h"

void	ft_env(t_mini *mini)
{
	int	i;

	i = 0;
	while (mini->env[i])
	{
		if (ft_strchr(mini->env[i], '='))
			ft_putendl_fd(mini->env[i], STDOUT);
		i++;
	}
	mini->ret = 0;
}
