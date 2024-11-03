/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 23:51:21 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/02 17:02:33 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	unsigned long long	result;
	size_t				idx;
	int					sign;

	result = 0;
	sign = 1;
	idx = 0;
	while (ft_isspace(str[idx]))
		idx++;
	if (str[idx] == '-' || str[idx] == '+')
	{
		if (str[idx] == '-')
			sign *= -1;
		idx++;
	}
	while (str[idx] >= 48 && str[idx] <= 57)
	{
		result = (result * 10) + (str[idx] - 48);
		idx++;
	}
	if (result > 9223372036854775807 && sign < 0)
		return (-1);
	return (result * sign);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	// char str[] = "  			21474836492222515151517a5";
// 	char *n = "9223372036854775808";
// 	int i1 = atoi(n);
// 	int i2 = ft_atoi(n);

// 	printf("O: %d\n", i1);
// 	printf("M: %d\n", i2);
// }
