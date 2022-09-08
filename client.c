/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:01:12 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/29 13:47:43 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char *argv[])
{
	pid_t	n_pid;

	signal(SIGUSR1, ft_return);
	signal(SIGUSR2, ft_failure);
	if ((argc != 3) || (!ft_isalldigit(argv[1])))
	{
		ft_printf("Incorrect\n");
		ft_printf("[./client <PID> <STR>]\n");
		exit(EXIT_FAILURE);
	}
	n_pid = ft_atoi(argv[1]);
	while (1)
	{
		ft_atobin(*argv[2]++, n_pid);
		if (*argv[2] == '\0')
		{
			ft_atobin(0, n_pid);
			kill(getpid(), SIGUSR2);
		}
	}
}

void	ft_atobin(char c, pid_t n_pid)
{
	int	count;

	count = 8;
	while (count--)
	{
		if (c & (1 << count))
			kill (n_pid, SIGUSR2);
		else
			kill (n_pid, SIGUSR1);
		usleep(300);
	}
}

int	ft_isalldigit(char	*str)
{
	while (*str)
	{
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}

void	ft_return(int sig)
{
	(void)sig;
	ft_printf("%s", "Message Sent to Server\n");
	exit(EXIT_SUCCESS);
}

void	ft_failure(int sig)
{
	(void)sig;
	ft_printf("%s", "Message Not Sent to Server\n");
	exit(EXIT_FAILURE);
}
