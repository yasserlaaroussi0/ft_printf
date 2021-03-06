/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylaarous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 13:55:44 by ylaarous          #+#    #+#             */
/*   Updated: 2021/12/28 14:24:16 by ylaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_hex_up(unsigned int n, int *cp)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (n < 16)
		*cp += write(1, &hex[n], 1);
	else
	{
		ft_hex_up(n / 16, cp);
		ft_hex_up(n % 16, cp);
	}
}
