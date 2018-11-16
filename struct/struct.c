#include <stdio.h>
#include <stdlib.h>

typedef struct		s_list
{
	void		*content;
	size_t		content_size;
	struct s_list	*next;
}			t_list;

typedef struct		f_list
{
	t_list		*first;
}			f_list;

f_list	*init()
{
	f_list	*ptsurlist = malloc(sizeof(*ptsurlist));
	t_list	*ptsurelem = malloc(sizeof(*ptsurelem));

	if (ptsurelem == NULL || ptsurlist == NULL)
		exit(EXIT_FAILURE);

	ptsurelem->content = NULL;
	ptsurelem->content_size = 0;
	ptsurlist->first = ptsurelem;

	return ptsurlist;
}

int main()
{
	init();
	return (0);
}
