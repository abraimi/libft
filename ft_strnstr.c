/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 23:14:04 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/05 00:30:35 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	idx;
	size_t	sub;
	char	*h;

	h = (char *)haystack;
	if (!*needle)
		return (h);
	idx = 0;
	while (idx < n && h[idx])
	{
		if (h[idx] == needle[0])
		{
			sub = 0;
			while (h[idx + sub] == needle[sub] && needle[sub] && sub + idx < n)
				sub++;
			if (needle[sub] == '\0')
				return (h + idx);
		}
		idx++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	// char *s1 = "MZIRIBMZIRIBMZE123";
// 	// char *s2 = "MZIRIBMZE";
// 	// size_t max = strlen(s2);
// 	// char *i1 = strnstr(s1, s2, max);
// 	// char *i2 = ft_strnstr(s1, s2, max);

//  	char *s1 = "see FF your FF return FF now FF";
//     char *s2 = "FF";
//     size_t max = strlen(s1);
//     char *i1 = strnstr(s1, s2, max);
//     char *i2 = ft_strnstr(s1, s2, max);

// 	printf("O: %s\n", i1);
// 	printf("M: %s\n", i2);
// }