/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 03:48:20 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/05 00:18:12 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*ptr;
	char	ch;

	ch = (char)c;
	ptr = (char *)s;
	len = ft_strlen(s);
	if (ch == '\0')
		return (&ptr[len]);
	while (len-- > 0)
	{
		if (ptr[len] == ch)
			return (&ptr[len]);
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	// char	str[] = "Hello, wo,rld!";
// 	// char *src = NULL;
// 	// char *d1 = strrchr(src, 'a');
// 	// char *d2 = ft_strrchr(src, 'a');

// 	char *src = "xteste";
// 	int	 c = 1024;
// 	char *d1 = strrchr(src,c);
// 	char *d2 = ft_strrchr(src,c);

// 	printf("O: %s\n", d1);
// 	printf("M: %s\n", d2);
// }