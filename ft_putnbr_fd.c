/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abraimi <abraimi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 07:34:08 by abraimi           #+#    #+#             */
/*   Updated: 2024/11/01 08:16:32 by abraimi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	sign;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		n *= -1;
	}
	if (n >= 0)
	{
		if (sign == -1)
			ft_putchar_fd('-', fd);
		if (n >= 0 && n <= 9)
			ft_putchar_fd(n + 48, fd);
		else
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
	}
}

// int main()
// {
// 	int fd;

// 	fd = open("test.txt", O_WRONLY);

// 	ft_putnbr_fd(-2147483648, fd);
// 	return (0);
// }