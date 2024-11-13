/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 01:59:18 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/11 22:50:58 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	idx;
	char	ch;
	char	*ps;

	ch = (char)c;
	ps = (char *)s;
	idx = 0;
	while (ps[idx] != '\0')
	{
		if (ps[idx] == ch)
			return (&(ps)[idx]);
		idx++;
	}
	if (ch == '\0' && ps[idx] == '\0')
		return (&(ps)[idx]);
	return (NULL);
}
