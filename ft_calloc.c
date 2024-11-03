/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 01:51:23 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/02 18:41:56 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			len;

	if (!count || !size)
		return (ft_strdup(""));
	len = count * size;
	ptr = (unsigned char *)malloc(len);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, len);
	return (ptr);
}

// #include <stdlib.h>
// #include <stdio.h>
// int main()
// {
// 	char *ptr;
// 	char *p2;

// 	ptr = (char *)ft_calloc(13, 1);
// 	p2 = (char *)calloc(13, 1);
// 	printf("M: %s\nO: %s\n", ptr,p2);
// 	free(ptr);
// 	free(p2);
// }
