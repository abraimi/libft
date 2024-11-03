/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 05:03:53 by abraimi           #+#    #+#             */
/*   Updated: 2024/10/30 05:49:25 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	idx;
	size_t	len;
	char	*ptr_s1;

	len = ft_strlen(s1);
	ptr_s1 = (char *)malloc(len + 1);
	if (ptr_s1 == NULL)
		return (NULL);
	idx = 0;
	while (idx < len)
	{
		ptr_s1[idx] = s1[idx];
		idx++;
	}
	ptr_s1[idx] = '\0';
	return (ptr_s1);
}
// #include <stdio.h>

// int main()
// {
// 	char str[] = "Hello, World!";
// 	char *dup;

// 	dup = ft_strdup(str);
// 	printf("%s\n", dup);
// 	free(dup);
// 	return (0);
// }