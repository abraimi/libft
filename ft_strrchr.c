/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 03:48:20 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/11 22:52:00 by abraimi          ###   ########.fr       */
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
