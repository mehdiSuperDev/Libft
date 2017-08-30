/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraheemu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/15 12:05:30 by mraheemu          #+#    #+#             */
/*   Updated: 2016/02/20 15:36:11 by mraheemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_leave_space_at_begin(char const *s)
{
	int i;

	i = 0;
	if (s)
	{
		while (((*s == ' ') || (*s == '\n') || (*s == '\t')) \
					&& (*s))
		{
			i++;
			s++;
		}
	}
	return (i);
}

static int	ft_leave_space_at_end(char const *s)
{
	int i;
	int len;

	i = 0;
	len = 0;
	if (s)
	{
		while (*s)
		{
			if (((*s == ' ') || (*s == '\n') || (*s == '\t')) \
						&& (*s))
				i++;
			else
				len = ++i;
			s++;
		}
	}
	return (len);
}

char		*ft_strtrim(char const *s)
{
	char	*strtrim;
	int		start_str;
	int		end_str_len;

	strtrim = NULL;
	if (s)
	{
		start_str = ft_leave_space_at_begin(s);
		end_str_len = ft_leave_space_at_end(s + start_str);
		strtrim = ft_strsub(s, start_str, end_str_len);
	}
	return (strtrim);
}
