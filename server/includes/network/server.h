/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwatrelo <vwatrelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/06/24 14:15:38 by vwatrelo          #+#    #+#             */
/*   Updated: 2014/06/24 17:49:48 by vwatrelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
# define SERVER_H

# include "bool.h"
# include "global.h"
# include "get_client.h"
# include "read_client.h"
# include "struct.h"
# include <send_to_sockfd.h>
# include <ft_printf.h>
# include <libft.h>
# include <list.h>
# include <sys/socket.h>
# include <sys/time.h>
# include <netinet/in.h>

int				launch_select(int sockfd, t_data_server *s_data);
void			check_select(t_select *st_select, t_data_server *st_data);
void			set_fd_select(int sockfd, t_select *st_select);

#endif
