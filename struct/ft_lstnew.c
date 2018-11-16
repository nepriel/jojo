#include <stdio.h>
#include <stdlib.h>

typedef struct		s_list
{
	void		*content;
	size_t		content_size;
	struct s_list	*next;
}			t_list;

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
