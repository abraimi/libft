/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 05:51:05 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/04 10:35:30 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	idx;
	size_t	size;
	char	*substr;

	size = ft_strlen(s);
	if (!len || !s)
		return (ft_strdup(""));
	if (start >= size)
		return (ft_strdup(""));
	if (len > size)
		len = size - start;
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (ft_strdup(""));
	idx = 0;
	while (idx < len && s[start + idx] != '\0')
	{
		substr[idx] = s[start + idx];
		idx++;
	}
	substr[idx] = '\0';
	return (substr);
}
// #include <stdio.h>
// int main()
// {
// 	// char str[] = "i just want this part #############";
// 	char *p;

// 	// p = ft_substr(str, 5, 20);
// 	p = ft_substr("tripouille", 0, 42000);
// 	printf("%s\n", p);
// 	free(p);
// 	return (0);
// }