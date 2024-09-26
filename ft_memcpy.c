/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:23:25 by maiferna          #+#    #+#             */
/*   Updated: 2024/09/11 14:53:52 by maiferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*src;
	size_t				i;

	i = 0;
	dest = (unsigned char *)s1;
	src = (const unsigned char *)s2;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (s1);
}
