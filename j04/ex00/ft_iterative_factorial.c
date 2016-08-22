/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymahade <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 00:47:58 by ymahade           #+#    #+#             */
/*   Updated: 2016/08/21 14:52:10 by ymahade          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int r;

	r = 1;
	if (nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	while (nb >= 1)
	{
		r *= nb;
		nb--;
	}
	return (r);
}
