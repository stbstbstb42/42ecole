#include "philosophers.h"

int	main(int argc, char *argv[])
{
	t_philosophers	philo;
	int				i;

	i = 0;
	while (++i < argc)
		if (!ft_strisdigit(argv[i]))
			my_exit(0, "Non sono previsti argomenti alfanumerici");
	init_philosophers(argv, &philo, argc);
	end_success(&philo);
}
