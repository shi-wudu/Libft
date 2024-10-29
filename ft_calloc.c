/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marleand <marleand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 13:35:34 by marleand          #+#    #+#             */
/*   Updated: 2024/10/29 16:57:08 by marleand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void *ft_memset(void *s, int filler, size_t n)
{
    size_t i;
    unsigned char *s1;

    i = 0;
    s1 = (unsigned char *)s;
    while (i < n)
        s1[i++] = filler;
    return (s);     
}
void *calloc(size_t count, size_t size)
{
}