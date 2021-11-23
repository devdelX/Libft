/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:12:49 by abel-oua          #+#    #+#             */
/*   Updated: 2021/11/19 20:56:36 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	size_t i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		return (char *)&s[i];
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return NULL;
}

// int main()
// {
// 	printf("%s", ft_strchr("Hello", 'e'));
// }
