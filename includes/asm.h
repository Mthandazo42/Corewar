/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asm.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndhlovu <mndhlovu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:56:07 by mndhlovu          #+#    #+#             */
/*   Updated: 2019/05/25 08:51:03 by mndhlovu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASM_H
#define ASM_H
#include "op.h"
#include "libft.h"
#include <unistd.h>

typedef struct			s_err_warn
{
	char				*desc;
	int					lin_num;
	int					impact;
	s_err_warn			*next;
}						t_err_warn;

typedef struct			s_eutils
{
	t_err_warn			*err_warn;
	int					count;
}						t_eutils;

int				asm_error_exit(int flag);

#endif
