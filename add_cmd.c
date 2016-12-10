#include "add_cmd.h"

static t_cmd_fn		get_cmd(const char *str_cmd, int *pos)
{
	int		i;
	int		end;
	int		start;
	char	final_cmd_str[MAX_CMD_SIZE + 1];

	start = jump_end_of_space(str_cmd);
	end = jump_to_space(str_cmd + start);
	*pos = end;
	ft_strncpy(final_cmd_str, str_cmd + start, end - start);
	*pos = i;
	i = 0;
	printf("Final cmd str: %s\n", final_cmd_str);
	while (i < SIZE_STR_TO_ENUM_CMD)
	{
		if (ft_strcmp(g_str_to_enum_cmd[i].cmd_str, final_cmd_str) == 0)
			return (g_str_to_enum_cmd[i].cmd_fn);
		i++;
	}
	return (NULL);
}

void	add_cmd(t_client *client)
{
	t_cmd_fn	cmd;
	const char	*cmd_str;
	int			pos;
	int			err;

	pos = 0;
	cmd_str = client->curr_cmd;
	printf("Client with message: %s", client->curr_cmd);
	if ((cmd = get_cmd(cmd_str, &pos)) == NULL)
	{
		printf("Command %s not recognize", cmd_str);
		return ;
	}
	err = cmd(cmd_str + pos, client);
}