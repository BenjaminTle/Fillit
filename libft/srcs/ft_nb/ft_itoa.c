/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 18:03:36 by thplessi          #+#    #+#             */
/*   Updated: 2018/11/16 23:19:05 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function convert an int value to a string reprtesenting this value.
** Return:	A malloced string containing the ascii representation of the nb.
** 			NULL if there is an error in memory allocation.
*/

static int	ft_ilen(int x)
{
	int		ret;

	ret = 0;
	if (x <= 0)
		ret++;
	while (x != 0)
	{
		x /= 10;
		ret++;
	}
	return (ret);
}

static void	ft_tostr(unsigned int n, char *str)
{
	*str = n % 10 + '0';
	if (n / 10 != 0)
		ft_tostr(n / 10, str - 1);
}

char		*ft_itoa(int n)
{
	char	*ret;
	size_t	len;

	len = ft_ilen(n);
	ret = (char*)malloc(len + 1);
	if (ret == NULL)
		return (NULL);
	if (n < 0)
	{
		*ret = ('-');
		ft_tostr(-n, ret + (len - 1));
	}
	else
		ft_tostr(n, ret + (len - 1));
	*(ret + len) = 0;
	return (ret);
}
