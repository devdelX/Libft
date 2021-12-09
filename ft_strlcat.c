/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 23:46:24 by abel-oua          #+#    #+#             */
/*   Updated: 2021/12/05 23:50:07 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendst;
	size_t	j;
	size_t	len;

	lendst = ft_strlen(dst);
	len = ft_strlen(src);
	if (dstsize <= lendst)
		len += dstsize;
	else
		len += lendst;
	j = 0;
	while (src[j] != '\0' && lendst + 1 < dstsize)
		dst[lendst++] = src[j++];
	dst[lendst] = '\0';
	return (len);
}
