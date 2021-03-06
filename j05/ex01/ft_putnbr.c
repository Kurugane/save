/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymahade <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 00:49:52 by ymahade           #+#    #+#             */
/*   Updated: 2016/08/23 17:27:04 by ymahade          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int	a;

	a = 1;
	if (nb < 0)
	{
		ft_putchar('-');
		a = -a;
	}
	if (nb >= 10 || nb <= -10)
		ft_putnbr(nb / 10 * a);
	ft_putchar(nb % 10 * a + '0');
}
