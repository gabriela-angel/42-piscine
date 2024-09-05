/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebricio <lebricio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 22:37:10 by lebricio          #+#    #+#             */
/*   Updated: 2024/09/01 22:37:12 by lebricio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"

int	search_entry(char *nbr, t_num *dict, int *count)
{
	int	entry;
	int	len;

	len = 0;
	entry = 0;
	while (entry <= *count)
	{
		if (ft_strcmp(nbr, dict[entry].num) == 0)
			return (1);
		entry++;
	}
	return (0);
}

int	search_nbr(char *nbr, t_num *dict, int *count)
{
	int	entry;
	int	len;

	entry = 0;
	while (entry <= *count)
	{
		if (ft_strcmp(nbr, dict[entry].num) == 0)
		{
			len = ft_strlen(dict[entry].lit);
			write(1, &dict[entry].lit, len);
		}
		entry++;
	}
	return (0);
}