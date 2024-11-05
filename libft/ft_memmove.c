/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouafik <rmouafik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:54:43 by rmouafik          #+#    #+#             */
/*   Updated: 2024/10/27 13:15:52 by rmouafik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;

	dest = (char *)dst;
	source = (char *)src;
	if (!dest && !source)
		return (NULL);
	if (dest < source)
	{
		while (len < 0)
		{
			dest[len] = source[len];
			len--;
		}
	}
	else
		ft_memcpy(dest, source, len);
	return (dest);
}
/*#include <stdio.h>
int main()
{
	char dest[10] = "f";
	char src[5] = "hello";
	ft_memmove(dest, src, 4);
	printf("%s\n",dest);
	memmove(dest, src ,4);
	printf("%s\n",dest);
}*/
