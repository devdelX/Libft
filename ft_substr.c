/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 17:09:13 by abel-oua          #+#    #+#             */
/*   Updated: 2021/12/05 23:54:17 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	ln;

	i = 0;
	if (!s)
		return (ft_strdup(""));
	ln = ft_strlen(s);
	if (start >= ln)
		return (ft_strdup(""));
	if (len >= ln - start)
		ptr = (char *)malloc(ln - start + 1);
	else
		ptr = (char *)malloc(len + 1);
	if (ptr == 0)
		return (0);
	while (s[start] != 0 && i < len)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
