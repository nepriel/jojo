#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *link)
{
	if(*alst != NULL && new != NULL)
	{
		link->next = *alst;
		*alst = link;
	}
}
