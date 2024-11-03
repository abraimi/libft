/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 00:37:03 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/03 23:05:34 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	count_words(const char *s, char c);
static size_t	count_chars(const char *s, char c, size_t start);
static size_t	skip_word(const char *s, char c, size_t start);
static char		*get_word(const char *s, char c, size_t start, size_t size);

char	**ft_split(const char *s, char c)
{
	size_t	size;
	size_t	idx;
	size_t	word_len;
	char	*sub;
	char	**strs;
	char a[2];
	a[0] = c;
	a[1] = '\0';
	strs = (char **)malloc(2);
	sub = ft_strtrim(s, a);
	if (!sub)
		return (NULL);
	strs[0] = sub;
	strs[1] = NULL;
	return (strs);
}

static size_t	skip_word(const char *s, char c, size_t start)
{
	while (*s != c && *s != '\0')
	{
		start++;
		s++;
	}
	return (start);
}

static char	*get_word(const char *s, char c, size_t start, size_t size)
{
	char	*word;
	size_t	idx;

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
	printf("%lu, %lu\n", start, idx);

	word[idx] = '\0';
	// ft_strlcpy(word, &(s)[start], size + 1);
	return (word);
}

static size_t	count_chars(const char *s, char c, size_t start)
{
	size_t	count;

	count = 0;
	while (s[start + count] != c && s[start + count])
		count++;
	return (count);
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

int main()
{
	char str[] = ",,,,,,,,  He, l l,oW,or,ld";
	char c = ',';
	char *s;

	// size_t size = count_chars(str, c, 8);
	// s = get_word(s, c, 8, size);

	// printf("%lu\n", size);
	// free(s);


	char **strs;
	size_t idx;

	strs = ft_split(str, c);
	idx = 0;
	while (strs[idx] != NULL)
		printf("%s\n", strs[idx++]);

	while (idx > 0)
		free(strs[idx--]);
	free(strs);
	return (0);
}