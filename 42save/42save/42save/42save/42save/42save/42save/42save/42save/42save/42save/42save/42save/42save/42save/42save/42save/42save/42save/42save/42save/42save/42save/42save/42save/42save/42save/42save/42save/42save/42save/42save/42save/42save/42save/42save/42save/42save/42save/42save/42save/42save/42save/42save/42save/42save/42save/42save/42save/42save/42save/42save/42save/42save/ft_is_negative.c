# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_is_negative                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ymahade <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/06 23:34:50 by ymahade           #+#    #+#              #
/*   Updated: 2016/08/07 16:01:49 by ymahade          ###   ########.fr       */
#                                                                              #
# **************************************************************************** #
#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
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

int     main()
{
	ft_i_negative(-1)
     return(0);
ear
