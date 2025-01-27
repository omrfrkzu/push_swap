/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omkuzu <omkuzu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:44:28 by omkuzu            #+#    #+#             */
/*   Updated: 2024/10/30 12:22:45 by omkuzu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	s = (void *)malloc(count * size);
	if (!s)
		return (NULL);
	ft_bzero(s, count * size);
	return (s);
}
