/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:38:44 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/24 17:02:43 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(void)
{
	struct sigaction	usr_h;

	usr_h.sa_sigaction = &usrhandler;
	usr_h.sa_flags = SA_SIGINFO | SA_RESTART;
	sigaction (SIGUSR1, &usr_h, NULL);
	sigaction (SIGUSR2, &usr_h, NULL);
	ft_printf("Started Process!\n");
	ft_printf ("PID: %d\n", getpid());
	while (1)
		pause();
	return (1);
}

void	usrhandler(int signum, siginfo_t *info, void *context)
{
	static int	bits;
	static int	c;

	(void)context;
	if (signum == SIGUSR2)
		c += 1 << (7 - bits);
	bits++;
	if (bits == 8)
	{
		ft_putchar_fd(c, 1);
		if (c == 0)
			kill(info->si_pid, SIGUSR1);
		c = 0;
		bits = 0;
	}
}
