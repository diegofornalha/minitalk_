/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:02:25 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/23 13:27:42 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	while ((i <= len) && (*haystack))
	{
		if (*(needle + i) == '\0')
			return ((char *)haystack);
		else if (*(haystack + i) == *(needle + i))
			i ++;
		else if (*(haystack + i) != *(needle + i))
		{
			i = 0;
			haystack ++;
			len --;
		}
	}
	return (0);
}
