#include "get_numeric_response.h"

char	*get_numeric_response_params(t_param_numeric_response *resp)
{
	char	*msg;
	size_t	i;
	size_t	tot_size;

	tot_size = 4;
	i = 0;
	while (i < resp->size)
	{
		tot_size += ft_strlen(err.err_str[i]) + 1;
		i++;
	}
	msg = malloc(tot_size);
	msg[0] = '\0';
	i = 0;
	while (i < resp->size)
	{
		ft_strcat(msg, err.err_str[i]);
		ft_strcat(msg, " ");
		i++;
	}
	ft_strcat(msg, ":");
	ft_strcat(err
}

char	*get_numeric_response(const char *hostname, const char *code,
		const char *nickname, const char *msg)
{
	size_t		final_size;
	char		*res;

	final_size = ft_strlen(hostname) + ft_strlen(code) + ft_strlen(nickname) + ft_strlen(msg) + 16;
	res = malloc(final_size * sizeof(char));
	ft_bzero(res, final_size);
	res[0] = ':';
	ft_strcat(res, hostname);
	ft_strcat(res, " ");
	ft_strcat(res, code);
	ft_strcat(res, " ");
	ft_strcat(res, nickname);
	ft_strcat(res, " :");
	ft_strcat(res, msg);
	ft_strcat(res, "\x0D\x0A");
	return (res);
}
