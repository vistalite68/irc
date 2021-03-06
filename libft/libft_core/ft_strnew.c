/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vwatrelo <vwatrelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 13:23:22 by vwatrelo          #+#    #+#             */
/*   Updated: 2014/05/11 16:39:07 by vwatrelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	size++;
	str = (char *)malloc(sizeof(char *) * size);
	if (str == NULL)
		return (NULL);
	while (size > 0)
		str[size-- - 1] = '\0';
	return (str);
}
