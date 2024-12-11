/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjesione < sjesione@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:08:45 by sjesione          #+#    #+#             */
/*   Updated: 2024/12/10 17:18:08 by sjesione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*l;

	l = '\0';
	while (*s++)
	{
		if (*s == c)
		{
			l = s;
		}
	}
	if (*l == '\0')
		return ('\0');
	else
		return ((char *)s);
}
