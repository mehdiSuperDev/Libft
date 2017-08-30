/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraheemu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/15 12:05:20 by mraheemu          #+#    #+#             */
/*   Updated: 2016/02/15 12:05:21 by mraheemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	str = NULL;
	if (s && f)
	{
		str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
		if (str)
		{
			i = 0;
			while (s[i])
			{
				str[i] = f(i, s[i]);
				i++;
			}
			str[i] = '\0';
		}
	}
	return (str);
}
