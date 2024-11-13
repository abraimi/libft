/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 04:22:31 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/13 06:04:41 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *str, char sep)
{
	size_t	len;

	len = 0;
	while (*str)
	{
		while (*str && *str == sep)
			str++;
		if (*str)
			len++;
		while (*str && *str != sep)
			str++;
	}
	return (len);
}

static void	*freeback(char **strs, size_t len)
{
	size_t	idx;

	if (!strs)
		return (NULL);
	idx = 0;
	while (idx < len)
		free(strs[idx++]);
	free(strs);
	return (NULL);
}

static size_t	word_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	**separate(char **strs, const char *s, char c)
{
	size_t	idx;
	size_t	len;

	idx = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			len = word_len(s, c);
			strs[idx] = ft_substr(s, 0, len);
			if (!strs[idx])
				return (freeback(strs, idx));
			idx++;
			s += len;
		}
	}
	strs[idx] = NULL;
	return (strs);
}

char	**ft_split(const char *s, char c)
{
	char	**strs;
	size_t	len;

	if (!s)
		return (NULL);
	len = count_words(s, c);
	strs = (char **)malloc((len + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	return (separate(strs, s, c));
}
