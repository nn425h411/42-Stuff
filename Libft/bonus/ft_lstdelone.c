#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		lst = NULL;
	if (!del)
		del = NULL;
	(*del)(lst->content);
	free(lst);
}
