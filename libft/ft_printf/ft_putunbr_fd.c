/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:05:10 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/23 13:05:10 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft.h"

size_t	ft_putunbr_fd(unsigned int nb, int fd)
{
	size_t	len;

	len = 0;
	if (nb >= 10)
		len += ft_putunbr_fd((nb / 10), fd);
	len += ft_putchar_fd(((nb % 10) + '0'), fd);
	return (len);
}
