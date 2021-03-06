/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_msg_to_client.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwatrelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 19:11:08 by vwatrelo          #+#    #+#             */
/*   Updated: 2017/01/08 19:11:11 by vwatrelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "send_msg_to_client.h"

void		send_msg_to_client(t_client *dest, t_client *src, const char *msg)
{
	char	*res;

	if ((res = get_priv_msg(msg, dest->nickname, src)) == NULL)
		return ;
	push_back_circular_buffer(dest->cmd_queue.buff_out, res);
}
