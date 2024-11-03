/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 06:02:23 by abraimi           #+#    #+#             */
/*   Updated: 2024/10/30 06:33:26 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	idx;
	size_t	sub;
	char	*ptr;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr = (char *)malloc(s1_len + s2_len + 1);
	if (ptr == NULL)
		return (NULL);
	idx = ft_strlcpy(ptr, s1, s1_len + s2_len + 1);
	sub = 0;
	while (s2[sub] != '\0')
	{
		ptr[idx] = s2[sub];
		idx++;
		sub++;
	}
	ptr[idx] = '\0';
	return (ptr);
}

// #include <stdio.h>

// int main()
// {
// 	char	s1[] = "Hello";
// 	char	s2[] = ", World!";
// 	char	*str;

// 	str = ft_strjoin(s1, s2);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }