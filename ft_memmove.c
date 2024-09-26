/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 09:46:19 by maiferna          #+#    #+#             */
/*   Updated: 2024/09/12 10:19:56 by maiferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char		*dest;
	const char	*src;
	size_t		i;

	i = 0;
	dest = (char *)s1;
	src = (const char *)s2;
	if (!dest && !src)
		return (0);
	if (dest > src)
	{
		while (n-- > 0)
		{
			dest[n] = src[n];
		}
	}
	else
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (s1);
}
