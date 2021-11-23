/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:38:44 by abel-oua          #+#    #+#             */
/*   Updated: 2021/11/23 15:15:55 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    int len_d;
    int len_s;

    len_s = ft_strlen(src);
    len_d = ft_strlen(dst);
    i = 0;
    if (dstsize == 0)
    return (len_s);
    while (i < dstsize && src[i])
    {
        dst[i] = src[i];
        i++;
    }

    if (i < dstsize)
    dst[i] = '\0';

    while (src[i])
    i++;
    return (i);
}

// int main ()
// {
//     char str2[11];
//     char str1[] = "Abdel";

//     printf("%zu", ft_strlcpy(str2, str1, 7));
// }
