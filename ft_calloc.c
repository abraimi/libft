/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 01:51:23 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/06 04:51:23 by abraimi          ###   ########.fr       */
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
