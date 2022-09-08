/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:02:29 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/23 13:27:42 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	if (!n)
		return (0);
	count = 0;
	while (n-- && (!s1[count] || !s2[count]))
	{
		if (s1[count] != s2[count])
			break ;
		count ++;
	}
	return ((unsigned char) s1[count] - (unsigned char) s2[count]);
}
