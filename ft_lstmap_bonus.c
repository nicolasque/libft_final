/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:36:10 by nquecedo          #+#    #+#             */
/*   Updated: 2023/12/19 16:40:59 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*new_list;

	new_list = (t_list *)malloc(ft_lstsize(lst) * sizeof(t_list));
	if (!new_list)
		return (NULL);

	while (lst != NULL)
	{
		
	}
	
}