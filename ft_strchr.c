/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:59:18 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/04 10:43:09 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	idx;
	size_t	size;

	size = ft_strlen(s);
	if (c == '\0')
		return (&((char *)s)[size]);
	idx = 0;
	while (s[idx] != '\0')
	{
		if (s[idx] == (char)c)
			return (&((char *)s)[idx]);
		idx++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char *src = "teste";
// 	char *d1 = strchr(src, 1024);
// 	char *d2 = ft_strchr(src, 1024);
// 	printf("O: %s\n", d1);
// 	printf("M: %s\n", d2);

// }