/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 17:03:17 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/05 00:12:28 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits(int n);

char	*ft_itoa(int n)
{
	int		size;
	int		idx;
	char	*asc;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	size = digits(n);
	if (size == 0 || n == 0)
		return (ft_strdup("0"));
	asc = (char *)malloc(size + 1);
	if (!asc)
		return (NULL);
	if (n < 0)
	{
		asc[0] = '-';
		n *= -1;
	}
	asc[size] = '\0';
	idx = size;
	while (idx > 0 && n > 0)
	{
		asc[--idx] = (n % 10) + 48;
		n /= 10;
	}
	return (asc);
}

static int	digits(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}
// #include <stdio.h>
// #include <time.h>

// int main()
// {
// 	// char *s;

// 	// s = ft_itoa(-123456789);
// 	// printf("%s", s);
// 	// free(s);
// 	// return (0);
// 	srand(clock());
// 	int n;
// 	char *d;

// 	for (int i = 0; i < 2000; i++)
// 	{
// 		n = rand();
// 		d = ft_itoa(n);
// 		printf("%s ", d);
// 	}
// }