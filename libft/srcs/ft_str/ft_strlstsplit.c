/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlstsplit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thplessi <thplessi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 16:32:34 by thplessi          #+#    #+#             */
/*   Updated: 2018/12/10 15:18:56 by thplessi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** This function split the given string on each occurences of the given
** character and return a chained list of strings.
** Return:	An chained list of strings containing the splited string.
** 			NULL if there is an error in memory allocation.
*/

static t_list	*ft_free_lst(t_list *lst)
{
	t_list		*next;

	while (lst)
	{
		next = lst->next;
		free(lst->content);
		free(lst);
		lst = next;
	}
	return (NULL);
}

static t_list	*ft_assign(t_list **lst, const char *content, size_t *i,
	size_t *t_len)
{
	if (t_len > 0)
	{
		*lst = ft_lstnew((void *)(content + *i - *t_len), *t_len);
		if (lst == NULL)
			return (NULL);
	}
	*t_len = 0;
	(*i)++;
	return (*lst);
}

t_list			*ft_strlstsplit(const char *s, char c)
{
	size_t		i;
	size_t		t_len;
	t_list		*lst;
	t_list		*strt;

	if (!s)
		return (NULL);
	strt = NULL;
	i = 0;
	t_len = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			lst = ft_assign((strt == NULL) ? &strt : &lst->next, s, &i, &t_len);
			if (lst == NULL)
				return (ft_free_lst(strt));
			continue ;
		}
		t_len++;
		i++;
	}
	if (ft_assign((strt == NULL) ? &strt : &lst->next, s, &i, &t_len) == NULL)
		return (ft_free_lst(strt));
	return (strt);
}
