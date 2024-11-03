/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:59:18 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/02 13:05:53 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	idx;

	idx = 0;
	while (s[idx] != '\0')
	{
		if (s[idx] == (char)c)
			return (&((char *)s)[idx]);
		idx++;
	}
	if (s[idx] == '\0' && c == '\0')
		return (&((char *)s)[idx]);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char *src = "\0";
// 	char *d1 = strchr(src, 'a');
// 	char *d2 = ft_strchr(src, 'a');
// 	printf("O: %s\n", d1);
// 	printf("M: %s\n", d2);

// }