/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   global.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwatrelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 19:09:09 by vwatrelo          #+#    #+#             */
/*   Updated: 2017/01/08 19:09:15 by vwatrelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GLOBAL_H
# define GLOBAL_H

# define NICK_MAXSIZE 9
# define TIME_WAIT_SELECT_US 1000000
# define MAX_CMD_SIZE 512
# define IN_CIRCULAR_BUFF 64
# define OUT_CIRCULAR_BUFF	256
# define MAX_SIZE_CMD_STR	63
# define CMD_CIRCULAR_BUFF_SIZE_IN 64
# define CMD_CIRCULAR_BUFF_SIZE_OUT 256
# define MAX_SIZE_HOSTNAME 63
# define MAX_SIZE_REALNAME 512
# define MAX_SIZE_USERNAME 512
# define MAX_SIZE_USERMODE 512
# define MAX_SIZE_CHANNEL_NAME 50
# define AUTHORIZED_CHAR_NICK "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789[]\\~"

# define SIZE_SEND_BUFF	1024
# define MAX_ERR 64

#endif
