/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouafik <rmouafik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 13:42:02 by rmouafik          #+#    #+#             */
/*   Updated: 2024/10/27 16:15:27 by rmouafik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	if (!dst || !src)
		return (0);
	len = ft_strlen(src);
	i = 0;
	if (dst > src)
	{
		while (i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	char dest[] = "jhjh             ";
	char src[] = "hellorrr";
	strlcpy(dest,src,8);
	printf("%s\n", dest);
	ft_strlcpy(dest,src,8);
	printf("%s\n",dest);
}*/