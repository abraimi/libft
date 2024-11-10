/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 01:51:23 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/11 00:02:26 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			len;

	if (!count || !size)
		return (ft_strdup(""));
	len = count * size;
	ptr = (unsigned char *)malloc(len);
	if (ptr)
		ft_bzero(ptr, len);
	return (ptr);
}

int main()
{
	size_t	count;
	size_t	size;
	char 	*s1;
	char	*s2;

	count = 0;
	size = sizeof(char);
	s1 = calloc(count, size);
	s2 = ft_calloc(count, size);

	// if (count)
	// {
		// s1 = ft_memset(s1, 97, count - 1);
		// s2 = ft_memset(s2, 97, count );

		printf("O: %s\n", s1);
		printf("M: %s\n", s2);
	// }

	return (0);
}