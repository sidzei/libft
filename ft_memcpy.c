/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjesione < sjesione@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:08:08 by sjesione          #+#    #+#             */
/*   Updated: 2024/12/16 16:00:21 by sjesione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*c;
	unsigned char	*cd;

	if (!dest && !src)
		return (NULL);
	c = (unsigned char *)src;
	cd = (unsigned char *)dest;
	while (n--)
	{
		*cd++ = *c++;
	}
	return (cd);
}
