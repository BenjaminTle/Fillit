/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strxjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/19 05:43:55 by thplessi          #+#    #+#             */
/*   Updated: 2017/02/19 05:03:19 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function concatenate multiple string and can free some of this strings.
** The string mode represent the argument to free with '1' and the other with
** '0'.
** The other arguments are strings to concatenate (char*)
** Return:	-The result of the concatenation.
** 			-NULL if there is an error in memory allocation.
*/

static char	*ft_xjoin(char **args, char *mode, size_t *nb)
{
	char	*ret;

	ret = (char *)malloc(sizeof(char) * nb[1]);
	if (ret == NULL)
		return (NULL);
	nb[1] = 0;
	nb[2] = 0;
	while (nb[2] < nb[0])
	{
		ft_strcpy(ret + nb[1], args[nb[2]]);
		nb[1] += ft_strlen(args[nb[2]]);
		if (mode[nb[2]] == '1')
			free(args[nb[2]]);
		nb[2]++;
	}
	return (ret);
}

char		*ft_strxjoin(char *mode, ...)
{
	char	**args;
	char	*ret;
	size_t	nb[3];
	va_list ap;

	va_start(ap, mode);
	nb[0] = ft_strlen(mode);
	args = (char **)malloc(sizeof(char *) * nb[0]);
	if (args == NULL)
		return (NULL);
	nb[1] = 0;
	nb[2] = 0;
	while (nb[2] < nb[0])
	{
		args[nb[2]] = va_arg(ap, char *);
		nb[1] += ft_strlen(args[nb[2]]);
		nb[2]++;
	}
	ret = ft_xjoin(args, mode, nb);
	va_end(ap);
	free(args);
	return (ret);
}
