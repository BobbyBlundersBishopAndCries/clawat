/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohabid <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:40:46 by mohabid           #+#    #+#             */
/*   Updated: 2024/10/23 16:04:48 by mohabid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (0);
}
/*
int main() {
    const char str1[] = "Hello";
    const char str2[] = "Hello!";
    
    int result = ft_memcmp(str1, str2, 6);
    if (result == 0) {
        printf("The memory blocks are equal.\n");
    } else {
        printf("The memory blocks differ by %d.\n", result);
    }
    return 0;
}*/
