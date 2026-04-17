/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaz-sil <nbaz-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:09:49 by nbaz-sil          #+#    #+#             */
/*   Updated: 2026/04/13 13:22:27 by nbaz-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				 	t_list;

/* Memory and string manipulation functions are useful. But you will soon discover that
manipulating lists is even more useful.
In this third part, you have to implement functions using a structure to manipulate linked
list. To do so, add the following structure declaration to your libft.h file:
typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;
The members of the t_list struct are:
• content: The data contained in the node.
Using void * allows you to store any type of data.
• next: The address of the next node, or NULL if the current node is the last one.
Implement the following functions in order to easily use your lists: */

ft_lstnew
ft_lstadd_front
ft_lstsize
ft_lstlast
ft_lstadd_back
ft_lstdelone
ft_lstclear
ft_lstiter
ft_lstmap