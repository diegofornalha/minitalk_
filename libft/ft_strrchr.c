/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dida-sil <dida-sil@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:02:21 by dida-sil          #+#    #+#             */
/*   Updated: 2022/08/23 13:27:43 by dida-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	count;
	int	lastocur;

	count = 0;
	lastocur = -1;
	while (s[count])
	{
		if (s[count] == (char) c)
			lastocur = count;
		count ++;
	}
	if (lastocur >= 0)
		return ((char *) s + lastocur);
	else if (c == 0)
		return ((char *) s + count);
	else
		return (0);
}
