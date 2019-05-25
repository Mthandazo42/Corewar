/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asm_error_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <mndhlovu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:11:05 by mndhlovu          #+#    #+#             */
/*   Updated: 2019/05/25 08:50:58 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

int				asm_syntax_lexer_err(t_eutils *utils, int flag, int line_num)
{
	t_err_warn	*data;
	t_err_warn	*new;
	int			tmp;

	if (!new = (t_err_warn*)malloc(sizeof(t_err_warn)))
		return (0);

	if (flag == 0)
	{
		new->desc = "Syntax error on line ";
		new->lin_num = line_num;
		new->impact = 1;
	}
	else if (flag == 1)
	{
		new->desc = "Lexical error on line ";
		new->lin_num = line_num;
		new->impact = 1;
	}
	if (utils->err_warn == NULL)
	{
		utils->err_warn = new;
		utils->err_warn->next = NULL;
		return (0);
	}
	else
	{
		data = utils->err_warn;
		while (data)
			data = data->next;
		data = new;
		return (0);
	}
}
