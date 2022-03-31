#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst)
		lst = NULL;
	if (!*lst)
		*lst = NULL;
	if (!del)
		del = NULL;
	while (*lst)
	{
		temp = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		*lst = temp;
	}
}
