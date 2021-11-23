/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:16:03 by abel-oua          #+#    #+#             */
/*   Updated: 2021/11/23 17:31:53 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return (((void *)s) + i);
		i++;
	}
	return (0);
}

// int main()
// {
//     char uh[20] = "Abdel";
//     printf("%s\n",ft_memchr(uh,'e',5));
// 	printf("%s",memchr(uh,'v',5));
// }
