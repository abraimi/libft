/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 00:37:03 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/02 09:04:53 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	count_words(const char *s, char c);
static size_t	count_chars(const char *s, char c, size_t start);
static size_t	skip_word(const char *s, char c, size_t start);
static char	*get_word(const char *s, char c, size_t start, size_t size);

char	**ft_split(const char *s, char c)
{
	size_t	size;
	size_t	idx;
	size_t	word_len;
	char	**strs;

	size = count_words(s, c);
	strs = (char **)malloc(size + 1);
	if (!strs)
		return (NULL);
	idx = 0;
	while (s[idx] != '\0')
	{
		if (s[idx] != c)
		{
			word_len = count_chars(s, c, idx);
			*strs++ = get_word(s, c, idx, word_len);
			idx = word_len;
		}
		idx++;
	}
	*strs = NULL;
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
// }

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

// int main()
// {
// 	char str[] = ",,,,,,,,  He, l l,oW,or,ld        ";
// 	char c = ',';
// 	char *s;

// 	// size_t size = count_chars(str, c, 8);
// 	// s = get_word(s, c, 8, size);

// 	// printf("%lu\n", size);
// 	// free(s);


// 	char **strs;

// 	strs = ft_split(str, c);
// 	while (*strs != NULL)
// 		printf("%s\n", *strs++);

// 	while (*strs != NULL)
// 		free(*strs++);
// 	free(strs);
// 	return (0);
// }