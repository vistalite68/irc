/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwatrelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 19:09:58 by vwatrelo          #+#    #+#             */
/*   Updated: 2017/01/08 19:10:02 by vwatrelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "client_utils.h"

t_bool		is_nick_free(t_list *client_lst, const char *nick)
{
	t_client	*client;
	t_list		*next;

	while (client_lst)
	{
		next = client_lst->next;
		client = client_lst->content;
		if (ft_strncmp(client->upper_nickname, nick, NICK_MAXSIZE) == 0)
		{
			return (FALSE);
		}
		client_lst = next;
	}
	return (TRUE);
}

t_bool		is_username_free(t_list *client_lst, const char *upper_username)
{
	t_client	*client;
	t_list		*next;

	while (client_lst)
	{
		next = client_lst->next;
		client = client_lst->content;
		if (ft_strncmp(client->upper_username, upper_username,
					MAX_SIZE_USERNAME) == 0)
		{
			return (FALSE);
		}
		client_lst = next;
	}
	return (TRUE);
}

t_bool		is_nick_valid(const char *nick)
{
	int			i;

	i = 0;
	while (nick[i] != '\0')
	{
		if (i == 0 && (ft_isdigit(nick[i]) || nick[i] == '-'))
			return (FALSE);
		if (ft_strchr(AUTHORIZED_CHAR_NICK, nick[i]) == NULL)
			return (FALSE);
		i++;
	}
	return (TRUE);
}
