/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymahade <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 13:41:34 by ymahade           #+#    #+#             */
/*   Updated: 2016/08/05 15:41:58 by ymahade          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char  i;
	
		i  = 'z';
		while (i >= 'a')
		{
			ft_putchar(i);
			i--;
		}
}

int		 main()
{
	ft_print_reverse_alphabet();
	return (0);
}
