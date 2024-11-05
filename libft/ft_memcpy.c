/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouafik <rmouafik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:20:12 by rmouafik          #+#    #+#             */
/*   Updated: 2024/11/05 11:42:48 by rmouafik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dest;
	char	*source;
	size_t	i;

	dest = (char *)dst;
	source = (char *)src;
	if (!dest && !source)
		return (NULL);
	else
	{
		i = 0;
		while (i < n)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dest);
}
/*
int main() {
    char dst[20] = "pp";
    char src[] = "hello";
    printf("%s\n", dst);
    ft_memcpy(dst,src,1);
    printf("%s\n", dst);
}*/
