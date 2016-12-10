#ifndef FN_H
# define FN_H

# define NICK_NO_PARAM (-1)
# define NICK_TOO_LONG (-2)
# define NICK_ALREADY_TAKEN (-3)
# define NICK_BAD_CHAR (-4)
# define CMD_SUCCESS (1)

# include "struct.h"

int		nick_fn(const char *param_str, t_client *client);

#endif