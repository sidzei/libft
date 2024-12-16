/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjesione < sjesione@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:54:41 by sjesione          #+#    #+#             */
/*   Updated: 2024/12/16 15:40:12 by sjesione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (len > (size_t)ft_strlen((char *)s))
		return (NULL);
	if (start >= (unsigned int)ft_strlen((char *)s))
		return (NULL);
	ptr = ft_calloc(sizeof(char), len);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		ptr[i] = s[start + i];
		i++;
	}
	return (ptr);
}
