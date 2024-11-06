/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 04:53:37 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/06 04:50:51 by abraimi          ###   ########.fr       */
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
