/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:30:05 by abel-oua          #+#    #+#             */
/*   Updated: 2021/12/05 23:53:19 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_strwl(char *haystack)
{
	size_t	i;

	i = 0;
	while (haystack[i] != '\0')
		i++;
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	tolenght;
	char	*myhaystack;
	char	*myneedle;

	myhaystack = (char *)haystack;
	myneedle = (char *)needle;
	tolenght = ft_strwl(myneedle);
	i = 0;
	j = 0;
	if (tolenght == 0)
		return (myhaystack);
	while (myhaystack[i] && i < len)
	{
		while ((myhaystack[i + j] == myneedle[j]) && j + i < len)
		{
			if (j + 1 == tolenght)
				return (myhaystack + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
