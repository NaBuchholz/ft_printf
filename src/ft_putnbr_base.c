/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:24:53 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/11/18 16:24:57 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr_base(int nbr, short base)
{
	char	*digits;
	int		count;

	digits = "0123456789abcdef";
	count = 0;
	if (base < 2 || base > 16)
		return (0);
	if (nbr == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	if (nbr < 0 && base == 10)
	{
		ft_putchar('-');
		count += 1;
		nbr = -nbr;
	}
	if (nbr >= base)
		count += ft_putnbr_base(nbr / base, base);
	count += ft_putchar(digits[nbr % base]);
	return (count);
}
