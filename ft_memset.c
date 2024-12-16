/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjesione < sjesione@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:08:16 by sjesione          #+#    #+#             */
/*   Updated: 2024/12/16 16:10:10 by sjesione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int val, size_t n)
{
	unsigned char	*c;

	if (!ptr)
		return (NULL);
	c = (unsigned char *)ptr;
	while (n--)
	{
		*c++ = val;
	}
	return (c);
}
