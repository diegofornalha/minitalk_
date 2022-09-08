/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:05:29 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/23 13:05:29 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include "../libft.h"

int		ft_printf(const char *ptstr, ...);
size_t	ft_putunbr_fd(unsigned int nb, int fd);
size_t	ft_putptr_fd(void *ptr, int fd);
size_t	ft_puthex_fd(unsigned int nb, char plcholder, int fd);

#endif
