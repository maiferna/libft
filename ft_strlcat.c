/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiferna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:26:55 by maiferna          #+#    #+#             */
/*   Updated: 2024/09/10 11:54:53 by maiferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l_dest;
	size_t	l_src;

	l_dest = ft_strlen(dst);
	l_src = ft_strlen(src);
	i = 0;
	if (size <= l_dest)
	{
		return (l_src + size);
	}
	while (i < size - l_dest - 1 && src[i] != '\0')
	{
		dst[l_dest + i] = src[i];
		i++;
	}
	dst[l_dest + i] = '\0';
	return (l_dest + l_src);
}
