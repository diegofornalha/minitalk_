/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:03:45 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/23 13:03:46 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(ssize_t n)
{
	size_t	nbr;
	int		len;

	len = 0;
	if (n < 0)
	{
		len += 1;
		nbr = (n * -1);
	}
	else
		nbr = n;
	if (nbr != 0)
	{
		len += ft_nbrlen(nbr / 10);
		len ++;
	}
	return (len);
}
