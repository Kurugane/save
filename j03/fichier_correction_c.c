/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fichier_correction.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glictevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 21:50:49 by glictevo          #+#    #+#             */
/*   Updated: 2016/08/06 08:18:15 by glictevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

//EXERCICE 00
void	ft_ft(int *nbr);
//EXERCICE 01
void	ft_ultimate_ft(int *********nbr);
//EXERCICE 02
void	ft_swap(int *a, int *b);
//EXERCICE 03
void	ft_div_mod(int a, int b, int *div, int *mod);
//EXERCICE 04
void	ft_ultimate_div_mod(int *a, int *b);
//EXERCICE 05
void	ft_putstr(char *str);
//EXERCICE 06
int		ft_strlen(char *str);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void    ft_putnbr(int nb)
{
  int int_length;
  int i;
  int memory;
  int modulo;

  int_length = 0;
  memory = nb;
  while (memory > 0)
    {
      int_length++;
      memory = memory / 10;
    }
  modulo = 1;
  i = 1;
  while (i < int_length)
    {
      modulo = modulo * 10;
      i++;
    }
  while (nb > 0)
    {
      ft_putchar(nb / modulo + '0');
      nb = nb % modulo;
      modulo = modulo / 10;
    }
}

int	main(void)
{
	int a;
	int *ptr;

	printf("EXERCICE 00 ");
	printf("\n");
	printf("Doit afficher \"42\"");
	printf("\n");
	a = 1337;
	ptr = &a;
	ft_ft(ptr);
	ft_putnbr(a);
	printf("\n");
	printf("\n");
	
	printf("EXERCICE 01");
	printf("\n");
	printf("Doit afficher \"42\"");
	printf("\n");
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;
	a = 1337;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	ft_ultimate_ft(ptr9);
	ft_putnbr(a);
	printf("\n");
	printf("\n");
	
	printf("EXERCICE 02");
	printf("\n");
	printf("Doit afficher \"666\" puis \"1337\"");
	printf("\n");
	int b;
	int *ptr_b;
	a = 1337;
	b = 666;
	ptr_b = &b;
	ft_swap(ptr, ptr_b);
	ft_putnbr(a);
	printf("\n");
	ft_putnbr(b);
	printf("\n");
	printf("\n");
	
	printf("EXERCICE 03");
	printf("\n");
	printf("Doit afficher \"4\" puis \"2\"");
	printf("\n");
	int div_value;
	int mod_value;
	int *div;
	int *mod;
	div = &div_value;
	mod = &mod_value;
	a = 42;
	b = 10;
	ft_div_mod(a, b, div, mod);
	ft_putnbr(*div);
	printf("\n");
	ft_putnbr(*mod);
	printf("\n");
	printf("\n");
	
	printf("EXERCICE 04");
	printf("\n");
	printf("Doit afficher \"4\" puis \"2\"");
	printf("\n");
	a = 42;
	b = 10;
	ft_ultimate_div_mod(ptr, ptr_b);
	ft_putnbr(a);
	printf("\n");
	ft_putnbr(b);
	printf("\n");
	printf("\n");
	
	printf("EXERCICE 05");
	printf("\n");
	printf("Doit afficher \"LOL\"");
	printf("\n");
	char *str;
	str = "LOL";
	ft_putstr(str);
	printf("\n");	
	printf("\n");

	printf("EXERCICE 06");
	printf("\n");
	printf("Doit afficher \"42\"");
	printf("\n");
	char *str_exo06;
	str_exo06 = "000000000000000000000000000000000000000042";
	ft_putnbr(ft_strlen(str_exo06));
	printf("\n");
	printf("\n");

}