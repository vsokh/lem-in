/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsokolog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/21 11:53:21 by vsokolog          #+#    #+#             */
/*   Updated: 2018/04/21 11:53:22 by vsokolog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		output(t_arg *arg, char *str)
{
	arg->len += write(1, str, ft_strlen(str));
	ft_strdel(&str);
}
