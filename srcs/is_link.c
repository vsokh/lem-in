/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_link.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsokolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 16:49:35 by vsokolog          #+#    #+#             */
/*   Updated: 2018/07/23 16:49:40 by vsokolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

bool	valid_first_name_room(char **data)
{
	while (**data && ft_isalnum(**data))
		(*data)++;
	if (**data == '-')
	{
		(*data)++;
		return (VALID);
	}
	return (INVALID);
}

bool	valid_second_name_room(char *data)
{
	while (*data)
	{
		if (!ft_isalnum(*data))
			return (INVALID);
		data++;
	}
	return (VALID);
}
