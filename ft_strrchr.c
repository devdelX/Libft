/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:54:29 by abel-oua          #+#    #+#             */
/*   Updated: 2021/12/05 23:53:37 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	in;
	int	isfind;

	isfind = 0;
	i = 0;
	in = i;
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			isfind = 1;
			in = i;
		}
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	if (isfind)
		return ((char *)(s + in));
	return (0);
}
