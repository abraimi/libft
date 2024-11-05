/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:59:18 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/05 00:17:22 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	idx;
	char	ch;
	char	*ps;

	ch = (char)c;
	ps = (char *)s;
	idx = 0;
	while (ps[idx] != '\0')
	{
		if (ps[idx] == ch)
			return (&(ps)[idx]);
		idx++;
	}
	if (ch == '\0' && ps[idx] == '\0')
		return (&(ps)[idx]);
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