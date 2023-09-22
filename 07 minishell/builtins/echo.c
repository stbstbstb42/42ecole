#include "../includes/minishell.h"

void	ft_echo(char **cmd, t_mini *mini)
{
	int		flag;
	char	**echo;

	flag = 0;
	(void)mini;
	(void)echo;
	if (cmd[1] && !ft_strncmp(cmd[1], "-n", 3))
	{
		flag = 1;
		cmd++;
	}
	while (*++cmd)
	{
		ft_putstr_fd(*cmd, 1);
		if (*++cmd)
			write(1, " ", 1);
		cmd--;
	}
	if (!flag)
		write(STDOUT, "\n", 1);
	mini->ret = 0;
}
