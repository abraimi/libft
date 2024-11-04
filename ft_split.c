/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 00:37:03 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/04 10:36:43 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	count_words(const char *s, char c);
static void		freeback(char **strs, size_t idx);
static size_t	skip_word(const char *s, char c, size_t start);
static char		*get_word(const char *s, char c, size_t start);

char	**ft_split(const char *s, char c)
{
	size_t	idx;
	size_t	sub;
	size_t	size;
	char	**strs;

	if (!s)
		return(NULL);
	if (!*s)
	{
		strs = (char **)malloc(sizeof(char *));
		if (!strs)
			return (NULL);
		strs[0] = NULL;
		return (strs);
	}
	size = count_words(s, c);
	strs = (char **)malloc((size + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	idx = 0;
	sub = 0;
	while (s[idx] != '\0')
	{
		if (s[idx] != c)
		{
			strs[sub] = get_word(s, c, idx);
			if (!strs[sub])
				freeback(strs, idx);
			sub++;
			idx = skip_word(s, c, idx);
		}
		idx++;
	}
	strs[sub] = NULL;
	return (strs);
}

// static char

static void	freeback(char **strs, size_t idx)
{
	if (!strs)
		return;
	while (idx > 0)
		free(strs[--idx]);
	free(strs);
}

static size_t	skip_word(const char *s, char c, size_t start)
{
	while (s[start] != c && s[start + 1] != '\0')
		start++;
	return (start);
}

static char	*get_word(const char *s, char c, size_t start)
{
	char	*word;
	size_t	idx;
	size_t	size;

	size = 0;
	while ((s[start + size] != c && s[start + size]))
		size++;
	word = (char *)malloc(size + 1);
	if (!word)
		return (NULL);
	idx = 0;
	while (s[start] != c && s[start] != '\0' && idx < size)
	{
		word[idx] = s[start];
		idx++;
		start++;
	}
	word[idx] = '\0';
	return (word);
}

static size_t	count_words(const char *s, char c)
{
	size_t	count;
	int		flag;

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

// int main()
// {
// 	// char str[] = ",,,,,,,,  He, l l,oW,or,ld,,,,";
// 	// char c = ',';
// 	char *str = 0;
// 	char c = 0;

// 	// size_t size = count_chars(str, c, 8);
// 	// s = get_word(s, c, 8, size);

// 	// printf("%lu\n", size);
// 	// free(s);

// 	char **strs;
// 	size_t idx;

// 	strs = ft_split(str, c);
// 	idx = 0;
// 	printf("{");
// 	while (strs[idx] != NULL)
// 		printf("%s,", strs[idx++]);
// 	printf("}");

// 	freeback(strs, idx);
// 	free(strs);
// 	return (0);
// }