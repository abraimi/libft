/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 23:14:04 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/12 06:05:48 by abraimi          ###   ########.fr       */
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
			while (h[idx + sub] && h[idx + sub] == needle[sub]
				&& needle[sub] && sub + idx < n)
				sub++;
			if (needle[sub] == '\0')
				return (h + idx);
		}
		idx++;
	}
	return (NULL);
}
