/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraheemu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/15 12:04:48 by mraheemu          #+#    #+#             */
/*   Updated: 2016/02/15 12:04:50 by mraheemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *zdmf;

	if ((zdmf = malloc(size)) == 0)
		return (0);
	ft_memset(zdmf, 0, size);
	return (zdmf);
}
