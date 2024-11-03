/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 06:34:07 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/03 21:27:10 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	trimchr(const char *set, int c)
{
	while (*set != '\0')
	{
		if (*set == (char)c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	char	*ptr;

	if (!s1 || !set)
		return ((void *)0);
	if (!*set)
		return (ft_strdup(s1));
	start = 0;
	while (trimchr(set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (trimchr(set, s1[end]))
		end--;
	ptr = ft_substr(s1, start, (end - start) + 1);
	return (ptr);
}

int main()
{
	char str[] = "..a.Hello, World.a.........................................................";
	char set[] = ".a";
	char *s;

	s = ft_strtrim(str, set);
	printf("%s\n",s);
	free(s);
	return (0);
}