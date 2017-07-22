/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_digits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frosu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/11 12:06:08 by frosu             #+#    #+#             */
/*   Updated: 2017/06/11 13:57:44 by frosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int			get_dig(unsigned int var)
{
	int	i;

	i = 0;
	if (!var)
		return (1);
	while (var)
	{
		i++;
		var /= 10;
	}
	return (i);
}

void		print_three(char *s1, char *s2, char *s3)
{
	int i;
	int n;

	i = 0;
	if (s1)
	{
		n = ft_strlen(s1);
		while (i < n)
			ft_putchar(s1[i++]);
		i = 0;
	}
	if (s2)
	{
		n = ft_strlen(s2);
		while (i < n)
			ft_putchar(s2[i++]);
		i = 0;
	}
	if (s3)
	{
		n = ft_strlen(s3);
		while (i < n)
			ft_putchar(s3[i++]);
		i = 0;
	}
}

void		ft_putnbrs(long long n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
		else
			ft_putchar(n + '0');
	}
}
