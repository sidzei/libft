/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjesione < sjesione@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 18:40:07 by sjesione          #+#    #+#             */
/*   Updated: 2024/12/16 18:41:55 by sjesione         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = n * (-1);
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*number;
	int		val;
	int		count;

	val = 0;
	if (n < 0)
		val = 1;
	count = counter(n) + val;
	number = (char *)ft_calloc(count + 1, sizeof(char));
	if (!number)
		return (number);
	number[count] = 0;
	if (val)
	{
		*number = '-';
		number[--count] = -(n % 10) + '0';
		n = -(n / 10);
	}
	while (count-- - val)
	{
		number[count] = n % 10 + '0';
		n = n / 10;
	}
	return (number);
}
