/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:00:46 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/24 19:19:11 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include "libft/libft.h"
# include <signal.h>

void	ft_return(int sig);
void	ft_failure(int sig);
int		ft_isalldigit(char	*str);
void	ft_atobin(char c, pid_t n_pid);
void	usrhandler(int signum, siginfo_t *info, void *context);

#endif
