/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:37:07 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/06 07:59:16 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	idx;

	idx = 0;
	while (s[idx] != '\0')
		idx++;
	return (idx);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char *s1 = "";
// 	char *s2 = NULL;
// 	printf("%zu\n", strlen(s1));
// 	printf("%zu\n", ft_strlen(s2));
// }