/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbuchhol <nbuchhol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:06:35 by nbuchhol          #+#    #+#             */
/*   Updated: 2024/11/18 15:46:53 by nbuchhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putstr(const char *str)
{
	int	count;
	int	i;

	if (!str)
		return (ft_putstr("(null)"));
	count = 0;
	i = 0;
	while (str[i])
	{
		count += ft_putchar(str[i]);
		i++;
	}
	return (count);
}
