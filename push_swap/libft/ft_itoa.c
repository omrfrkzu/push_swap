/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omkuzu <omkuzu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:54:42 by omkuzu            #+#    #+#             */
/*   Updated: 2024/10/23 17:45:01 by omkuzu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n, int flag)
{
	int	cont;

	cont = 0;
	if (n == 0)
		cont++;
	while (n != 0)
	{
		n = n / 10;
		cont++;
	}
	if (flag < 0)
		cont++;
	return (cont);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;
	long	n2;

	n2 = n;
	if (n2 < 0)
		sign = -1;
	else
		sign = 1;
	n2 = n2 * sign;
	len = ft_len(n2, sign);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = 0;
	while (--len >= 0)
	{
		str[len] = 48 + (n2 % 10);
		n2 = n2 / 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
