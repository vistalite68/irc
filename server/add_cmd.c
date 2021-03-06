/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_cmd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwatrelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 19:11:07 by vwatrelo          #+#    #+#             */
/*   Updated: 2017/01/08 19:11:10 by vwatrelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add_cmd.h"
#include "signal_handler.h"

static t_cmd_fn		get_cmd(const char *str_cmd, int *pos)
{
	size_t	i;
	int		end;
	int		start;
	char	final_cmd_str[MAX_CMD_SIZE + 1];
	int		size;

	start = jump_end_of_space(str_cmd, 0);
	end = jump_to_space(str_cmd, start);
	*pos = end;
	size = end - start;
	if (size > MAX_SIZE_CMD_STR)
		return (NULL);
	ft_strncpy(final_cmd_str, str_cmd + start, size);
	final_cmd_str[size] = '\0';
	i = 0;
	while (i < g_str_to_enum_cmd_size)
	{
		if (ft_strcmp(g_str_to_enum_cmd[i].cmd_str, final_cmd_str) == 0)
			return (g_str_to_enum_cmd[i].cmd_fn);
		i++;
	}
	return (NULL);
}

void				add_cmd(t_cat_cmd *st_cat_cmd, t_client *client)
{
	t_cmd_fn	cmd;
	const char	*cmd_str;
	int			pos;
	int			err;

	pos = 0;
	cmd_str = st_cat_cmd->curr_cmd;
	if (ft_strncmp(cmd_str, "quit", 4) == 0)
	{
		signal_handler(SIGINT);
	}
	if ((cmd = get_cmd(cmd_str, &pos)) == NULL)
	{
		printf("Command %s not recognize", cmd_str);
		return ;
	}
	err = cmd(cmd_str + pos, client);
	if (err != CMD_SUCCESS)
		send_err_cmd(err, client);
}
