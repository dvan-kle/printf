/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-kle <dvan-kle@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/17 19:07:33 by dvan-kle      #+#    #+#                 */
/*   Updated: 2022/10/26 16:03:35 by dvan-kle      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*lst;

	lst = ft_lstlast(*list);
	if (!lst)
		*list = new;
	else
		lst->next = new;
}
