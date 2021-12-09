/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:51:25 by abel-oua          #+#    #+#             */
/*   Updated: 2021/12/06 16:08:52 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str;
	char	*st;

	str = (char *)dst;
	st = (char *)src;
	i = 0;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		str[i] = st[i];
		i++;
	}
	return (dst);
}
