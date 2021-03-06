/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_global.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwatrelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 19:09:09 by vwatrelo          #+#    #+#             */
/*   Updated: 2017/01/08 19:09:11 by vwatrelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_GLOBAL_H
# define STRUCT_GLOBAL_H

# include <global.h>

typedef int	(*t_callback_cat_cmd)(void *, void *);

typedef struct			s_cat_cmd
{
	int					size_current_msg;
	char				curr_cmd[MAX_CMD_SIZE + 1];
	t_callback_cat_cmd	callback;
	void				*param_callback;
}						t_cat_cmd;

typedef struct			s_send_buff
{
	char				buff[SIZE_SEND_BUFF];
	size_t				start;
	size_t				end;
}						t_send_buff;

#endif
