/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 04:27:49 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/06 08:10:14 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr_b;
	size_t			idx;

	ptr_b = (unsigned char *)b;
	idx = 0;
	while (idx < len)
	{
		ptr_b[idx] = (unsigned char)c;
		idx++;
	}
	return (b);
}
