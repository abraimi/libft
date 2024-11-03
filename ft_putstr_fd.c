/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 07:06:46 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/02 12:12:28 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s != '\0')
		ft_putchar_fd(*s++, fd);
}

// int main()
// {
// 	int fd;

// 	fd = open("/dev/ttys008", O_WRONLY);
// 	ft_putstr_fd("\nHello, world!", fd);
// 	close(fd);
// 	return (0);
// }