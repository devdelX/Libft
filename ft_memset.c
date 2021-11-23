/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:04:54 by abel-oua          #+#    #+#             */
/*   Updated: 2021/11/23 17:20:41 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*bb;
	unsigned int	chr;

	bb = (unsigned char *)b;
	chr = (unsigned int)c;
	i = 0;
	while (i < len)
	{
		bb[i] = chr;
		i++;
	}
	return (b);
}
