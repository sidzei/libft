/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjesione < sjesione@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:08:08 by sjesione          #+#    #+#             */
/*   Updated: 2024/12/10 17:20:50 by sjesione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*c;
	unsigned char	*cd;

	c = (unsigned char *)src;
	cd = (unsigned char *)dest;
	while (n--)
	{
		*cd++ = *c++;
	}
	return (cd);
}
