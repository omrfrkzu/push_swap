/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omkuzu <omkuzu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:38:37 by omkuzu            #+#    #+#             */
/*   Updated: 2024/10/23 17:48:42 by omkuzu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		position;

	if (*needle == '\0')
		return ((char *)haystack);
	position = ft_strlen((char *)needle);
	while (*haystack != '\0' && len-- >= position)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, position) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
