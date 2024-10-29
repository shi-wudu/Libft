/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marleand <marleand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:13:45 by marleand          #+#    #+#             */
/*   Updated: 2024/10/29 16:22:02 by marleand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "stdio.h"

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
/* int main()
{
    char s[] = "Hello Bom Dia";
    char s1[] = "Hello Bom Dia";

    printf("String before memset: %s\n", s);
    memset(s, 77, 4);
    printf("String after memset: %s\n", s);

    printf("String before ft_memset: %s\n", s1);
    ft_memset(s1, 'm', 4);
    printf("String after ft_memset: %s\n", s1);
} */