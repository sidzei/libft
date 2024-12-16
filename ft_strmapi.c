/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjesione < sjesione@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:50:41 by sjesione          #+#    #+#             */
/*   Updated: 2024/12/16 19:02:38 by sjesione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*p;

	p = calloc(ft_strlen((char *)s), sizeof(char *));
	if (!p)
		return (p);
	p = (char *)s;
	i = 0;
	while (p[i++])
	{
		p[i] = f(i, p[i]);
	}
	return (p);
}
