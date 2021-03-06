/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   user_cmd.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwatrelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 19:10:17 by vwatrelo          #+#    #+#             */
/*   Updated: 2017/01/08 19:10:20 by vwatrelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef USER_CMD_H
# define USER_CMD_H

# include <str_utils.h>
# include "struct_client.h"
# include "client_const_global.h"
# include <ft_printf.h>
# include "errors/bad_cmd_stdin.h"
# include "disp_need.h"

void		parse_cmd(t_data *data, const char *cmd);

#endif
