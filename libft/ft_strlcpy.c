/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:02:46 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/23 13:27:41 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	t_size;

	t_size = ft_strlen(src);
	if (!dstsize)
		return (t_size);
	while (dstsize > 1 && *src)
	{
		*dst++ = *src++;
		dstsize --;
	}
	if (dstsize)
		*dst = '\0';
	return (t_size);
}
