/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negatives.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymahade <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 14:50:38 by ymahade           #+#    #+#             */
/*   Updated: 2016/08/08 16:47:26 by ymahade          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}

int		main(void)
{
	ft_is_negative(-1);
	return (0);
}
