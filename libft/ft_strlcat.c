/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:02:51 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/23 13:27:41 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	t_size;

	t_size = ft_strlen(src);
	while (*dst != '\0' && dstsize > 0)
	{
		t_size ++;
		dst ++;
		dstsize --;
	}
	while (dstsize > 1 && *src)
	{
		*dst++ = *src++;
		dstsize --;
	}
	if (dstsize)
		*dst = '\0';
	return (t_size);
}
