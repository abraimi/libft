/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 05:51:05 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/02 18:36:02 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	idx;
	char	*substr;

	if (!len || !s)
		return (ft_strdup(""));
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
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
// 	char str[] = "i just want this part #############";
// 	char *p;

// 	p = ft_substr(str, 5, 20);
// 	printf("%s\n", p);
// 	free(p);
// 	return (0);
// }