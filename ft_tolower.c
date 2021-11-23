/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abel-oua <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:35:37 by abel-oua          #+#    #+#             */
/*   Updated: 2021/11/15 18:25:55 by abel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_tolower(int c)
{
    if(c >= 'A' && c <= 'Z')
    c += 32;

    return(c);
}

// int main()
// {
//     printf("%d\n", ft_tolower(65));
//     printf("%d", ft_tolower(97));
// }