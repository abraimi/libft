/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 06:34:07 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/11 22:55:52 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

	if (!set || !s1)
		return (NULL);
	if (!*s1)
		return (ft_strdup(s1));
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
