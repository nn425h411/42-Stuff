#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*temp;

	if (!lst)
		lst = NULL;
	new_list = ft_lstnew(f(lst->content));
	if (!new_list)
		new_list = NULL;
	temp = new_list;
	lst = lst->next;
	while (lst)
	{
		new_list->next = ft_lstnew(f(lst->content));
		if (!new_list->next)
		{
			ft_lstclear(&temp, del);
			return (NULL);
		}
		new_list = new_list->next;
		lst = lst->next;
	}
	new_list->next = NULL;
	return (temp);
}
