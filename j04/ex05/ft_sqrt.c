c/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymahade <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 18:43:42 by ymahade           #+#    #+#             */
/*   Updated: 2016/08/18 01:13:24 by ymahade          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
	int n;

	n = 1;
	if (nb <= 0)
		return (0);
	while (n * n < nb)
		n++;
	if (n * n == nb)
		return (n);
	else
		return (0);
	if (n > nb)
		return (0);
}

int		main(void)
{
	printf("%d\n", ft_sqrt(3));
}
