/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 02:46:56 by dpunishe          #+#    #+#             */
/*   Updated: 2021/10/16 02:46:57 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*pre;
	t_list	*post;

	if (!lst || !del)
		return ;
	post = *lst;
	pre = post;
	while (pre)
	{
		post = post->next;
		del(pre->content);
		free(pre);
		pre = post;
	}
	*lst = NULL;
}
