/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:03:24 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/23 13:03:25 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putnbr_fd(int n, int fd)
{
	size_t			len;
	unsigned int	num;

	len = 0;
	if (n < 0)
	{
		len += ft_putchar_fd('-', fd);
		num = (n * -1);
	}
	else
		num = n;
	if (num >= 10)
	{
		len += ft_putnbr_fd((num / 10), fd);
	}
	len += ft_putchar_fd(((num % 10) + '0'), fd);
	return (len);
}
