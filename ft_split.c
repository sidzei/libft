/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjesione < sjesione@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:08:55 by sjesione          #+#    #+#             */
/*   Updated: 2024/12/16 19:59:30 by sjesione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	count++;
	return (count);
}

static char	*extract_word(char const *s, int start, int end)
{
	return (ft_substr(s, start, end - start));
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		start;
	int		index;

	result = ft_calloc(count_words(s, c), sizeof(char *));
	if (!result || !s)
		return (NULL);
	i = 0;
	index = 0;
	while (s[i])
	{
		while (s[i++] == c)
			start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			result[index] = extract_word(s, start, i);
			index++;
		}
	}
	return (result);
}
