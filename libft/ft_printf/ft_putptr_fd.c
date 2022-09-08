/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:05:19 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/23 13:05:19 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft.h"

size_t	ft_putptr_fd(void *ptr, int fd)
{
	unsigned long int	len;
	unsigned long int	nb;

	len = 0;
	nb = (unsigned long int) ptr;
	if (nb < 16)
		len += ft_putstr_fd("0x", fd);
	if (nb >= 16)
		len += ft_putptr_fd(((void *)(nb / 16)), fd);
	if (nb % 16 >= 10)
		len += ft_putchar_fd((((nb % 16) - 10) + 'a'), fd);
	else
		len += ft_putchar_fd(((nb % 16) + '0'), fd);
	return (len);
}
