/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 04:22:31 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/06 07:07:55 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	int		flag;

	if (!s || !*s)
		return (0);
	count = 0;
	flag = 1;
	while (*s == c)
		s++;
	while (*s != '\0')
	{
		if (*s != c)
			flag = 1;
		if ((*s == c || *(s + 1) == '\0') && flag)
		{
			flag = 0;
			count++;
		}
		s++;
	}
	return (count);
}

static void	*freeback(char **strs, size_t idx)
{
	if (!strs)
		return (0);
	while (idx > 0)
		free(strs[idx--]);
	free(strs);
	return (NULL);
}

static char	*get_word(const char *s, char c, size_t start)
{
	char	*word;
	size_t	len;

	len = 0;
	while ((s[start + len] != c && s[start + len]))
		len++;
	word = ft_substr(s, start, len);
	if (!word)
		return (NULL);
	return (word);
}

static char	**separate(char **strs, const char *s, char c)
{
	size_t	idx;
	size_t	sub;

	idx = 0;
	sub = 0;
	while (s[idx] != '\0' && strs)
	{
		if (s[idx] && s[idx] != c)
		{
			strs[sub] = get_word(s, c, idx);
			if (!strs[sub])
				return (freeback(strs, sub));
			while (s[idx] && s[idx] != c && s[idx + 1] != '\0')
				idx++;
			sub++;
		}
		idx++;
	}
	strs[sub] = NULL;
	return (strs);
}

char	**ft_split(const char *s, char c)
{
	char	**strs;
	size_t	len;

	len = count_words(s, c);
	strs = (char **)malloc((len + 1) * sizeof(char *));
	if (!strs)
		return (strs);
	if (!s || !*s)
	{
		strs[0] = NULL;
		return (strs);
	}
	strs = separate(strs, s, c);
	return (strs);
}

// int main()
// {
//     char *str = 0;
//     // char c = 32;
// 	// char str[] = "";
// 	char c = 0;
//     char **strs;
//     size_t idx = 0;

//     strs = ft_split(str, c);
//     printf("{");
// 	while (strs && strs[idx] != NULL)
// 	{
// 		printf("%s", strs[idx]);
// 		if (strs[idx + 1] != NULL)
// 			printf(", ");
// 		idx++;
// 	}
// 	freeback(strs, idx);
//     printf("}\n");

//     return (0);
// }