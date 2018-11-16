/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 14:46:56 by vlhomme           #+#    #+#             */
/*   Updated: 2018/11/16 14:48:03 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *newlist;

	newlist = malloc(sizeof(*newlist));
	if (newlist == NULL)
		return (NULL);
	if (content == NULL)
	{
		newlist->content = NULL;
		newlist->content_size = 0;
	}
	else
	{
		newlist->content = malloc(sizeof(content));
		if (newlist->content == NULL)
		{
			free(newlist);
			return (NULL);
		}
		ft_memcpy((newlist->content), content, sizeof(content));
		newlist->content_size = content_size;
	}
	newlist->next = NULL;
	return (newlist);
}
