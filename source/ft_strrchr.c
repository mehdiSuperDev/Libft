/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraheemu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 15:40:52 by mraheemu          #+#    #+#             */
/*   Updated: 2016/02/23 17:23:20 by mraheemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int remember;

	i = 0;
	remember = -1;
	while (s[i])
	{
		if (s[i] == c)
			remember = i;
		i++;
	}
	if (remember != -1)
		return ((char *)&s[remember]);
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
