/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraheemu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/15 12:05:14 by mraheemu          #+#    #+#             */
/*   Updated: 2016/02/15 12:05:14 by mraheemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*strjoin;
	unsigned int	index;
	unsigned int	i;

	strjoin = NULL;
	index = 0;
	i = 0;
	if (s1 && s2)
	{
		if ((strjoin = (char *)malloc(sizeof(char) * \
					(ft_strlen(s1) + ft_strlen(s2) + 1))))
		{
			while (s1[index])
				strjoin[i++] = s1[index++];
			index = 0;
			while (s2[index])
				strjoin[i++] = s2[index++];
			strjoin[i] = '\0';
		}
	}
	return (strjoin);
}
