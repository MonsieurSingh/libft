/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Teghjyot <tesingh@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:37:25 by Teghjyot          #+#    #+#             */
/*   Updated: 2024/03/06 15:37:26 by Teghjyot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr *= -1;
	}
	if (!(nbr < 10))
	{
		ft_putnbr_fd((int)(nbr / 10), fd);
		nbr %= 10;
	}
	if (nbr < 10)
		ft_putchar_fd(nbr + 48, fd);
}
