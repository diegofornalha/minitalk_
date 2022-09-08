/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:03:57 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/23 13:26:45 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if (!dst && !src)
		return (0);
	i = 0;
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
	{
		i += (len - 1);
		src += (len - 1);
		while (len --)
			*(char *)(dst + i--) = *(char *)src--;
	}
	return (dst);
}
