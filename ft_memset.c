/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:04:54 by abel-oua          #+#    #+#             */
/*   Updated: 2021/12/05 23:56:05 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned int	i;
	unsigned char	ch;
	char			*str;

	ch = (unsigned char)c;
	i = 0;
	str = b;
	while (i < len)
	{
		str[i] = ch;
		i++;
	}
	return (b);
}
