/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjesione < sjesione@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 20:15:05 by sjesione          #+#    #+#             */
/*   Updated: 2024/12/16 15:31:29 by sjesione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	trimmer(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*trimmed;
	size_t		start;
	size_t		end;

	start = 0;
	end = ft_strlen(s1);
	while (trimmer(s1[start], set))
		start++;
	if (start == end)
		return (ft_strdup(""));
	while (trimmer(s1[end], set))
		end--;
	trimmed = (ft_substr(s1, start, end - start));
	return (trimmed);
}
