/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marleand <marleand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:35:34 by marleand          #+#    #+#             */
/*   Updated: 2024/10/29 14:13:33 by marleand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void *ft_memset(void *s, int filler, size_t n)
{
    size_t i;

    i = 0;
    s = (unsigned char *)s;
    while (i <= n)
        s[i++] == filler;
    return (s)        
}
int main()