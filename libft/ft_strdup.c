/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:03:05 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/23 13:03:05 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;

	str = ft_calloc((ft_strlen(s1) + 1), sizeof(*s1));
	if (!str)
		return (0);
	i = 0;
	while (*s1)
		*(str + i++) = *s1++;
	*(str + i) = '\0';
	return (str);
}
