/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fn_loggin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwatrelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 19:10:17 by vwatrelo          #+#    #+#             */
/*   Updated: 2017/01/08 19:10:20 by vwatrelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fn_num_resp/fn_loggin.h"

int				fn_001(t_num_resp_param *param, t_data *data)
{
	data->logged.get_num_resp[0] = TRUE;
	push_msg(param->msg, data);
	check_if_all(data);
	return (1);
}

int				fn_002(t_num_resp_param *param, t_data *data)
{
	data->logged.get_num_resp[1] = TRUE;
	push_msg(param->msg, data);
	check_if_all(data);
	return (1);
}

int				fn_003(t_num_resp_param *param, t_data *data)
{
	data->logged.get_num_resp[2] = TRUE;
	push_msg(param->msg, data);
	check_if_all(data);
	return (1);
}

int				fn_004(t_num_resp_param *param, t_data *data)
{
	data->logged.get_num_resp[3] = TRUE;
	push_msg(param->msg, data);
	check_if_all(data);
	return (1);
}
