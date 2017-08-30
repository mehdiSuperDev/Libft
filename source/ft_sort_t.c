/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tab_ALL_NORME.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mraheemu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/17 15:33:15 by mraheemu          #+#    #+#             */
/*   Updated: 2016/04/20 16:06:16 by mraheemu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		siz_tl(int *t, int siz_t, int (*filter)(int fil_elm))
{
	int size;
	int i;

	size = 0;
	i = 0;
	while (siz_t--)
	{
		if (filter(t[i]) == 1)
			size++;
		i++;
	}
	return (size);
}

static int		new_length(int *t, int siz_t, int (*filter)(int fil_elm))
{
	int length;

	if (filter == NULL)
		length = siz_t;
	else
		length = siz_tl(t, siz_t, filter);
	return (length);
}

static int		simple_sort(int *t, int siz_t)
{
	int is_not_sorted;
	int j;
	int temp;

	is_not_sorted = TRUE;
	j = 0;
	while (is_not_sorted)
	{
		is_not_sorted = FALSE;
		while (j < siz_t - 1)
		{
			if (t[j] > t[j + 1])
			{
				temp = t[j];
				t[j] = t[j + 1];
				t[j + 1] = temp;
				is_not_sorted = TRUE;
			}
			j++;
		}
		j = 0;
	}
	return (siz_t);
}

static void		fill_t(int **n_t, int *t, int siz_t, int (*f)(int fil_elm))
{
	int i;
	int j;

	i = 0;
	j = 0;
	*n_t = (int *)malloc(sizeof(int) * new_length(t, siz_t, f));
	while (siz_t--)
	{
		if ((f != NULL) && (f(t[i]) == 1))
		{
			(*n_t)[j] = t[i];
			j++;
		}
		else
			(*n_t)[i] = t[i];
		i++;
	}
}

int				ft_sort_t(int *t, int **new_t, int siz_t, int (*flt)(int elm))
{
	int length;

	length = new_length(t, siz_t, flt);
	fill_t(new_t, t, siz_t, flt);
	return (simple_sort(*new_t, length));
}
