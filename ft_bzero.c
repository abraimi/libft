/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 04:53:37 by abraimi           #+#    #+#             */
/*   Updated: 2024/10/30 04:36:40 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr_s;
	size_t			idx;

	ptr_s = (unsigned char *)s;
	idx = 0;
	while (idx < n)
	{
		ptr_s[idx] = 0;
		idx++;
	}
}

// #include <stdio.h>
// #include <strings.h>

// int main()
// {
// 	char s1[] = "Hello, world!";
// 	char s2[] = "Hello, world!";
// 	bzero(s1, 13);
// 	ft_bzero(s2, 13);
// 	printf("O: %s\nM: %s\n", s1, s2);
// }
