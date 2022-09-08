/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:02:17 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/23 13:02:17 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	size_t	len;
	char	*str;

	start = 0;
	while (ft_strchr(set, s1[start]))
		start ++;
	len = (ft_strlen(s1) - 1);
	while (ft_strchr(set, s1[len]))
		len --;
	str = ft_substr(s1, start, ((len - start) + 1));
	return (str);
}
