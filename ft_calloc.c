/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjesione < sjesione@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 17:35:52 by sjesione          #+#    #+#             */
/*   Updated: 2024/12/10 17:21:23 by sjesione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t			allsize;
	void			*pointer;

	allsize = num * size;
	pointer = malloc(allsize);
	if (pointer == NULL)
		return (NULL);
	ft_bzero(pointer, allsize);
	return(pointer);
}
