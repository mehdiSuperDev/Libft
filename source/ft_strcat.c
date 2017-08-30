/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraheemu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 15:50:10 by mraheemu          #+#    #+#             */
/*   Updated: 2016/02/15 12:08:33 by mraheemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int	end_of_dest;

	end_of_dest = ft_strlen(s1);
	while (*s2 != '\0')
		s1[end_of_dest++] = *s2++;
	s1[end_of_dest] = '\0';
	return (s1);
}
