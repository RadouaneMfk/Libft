/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouafik <rmouafik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:23:21 by rmouafik          #+#    #+#             */
/*   Updated: 2024/10/28 19:17:49 by rmouafik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	append;

	src_len = 0;
	dst_len = 0;
	while (dst[dst_len] && dst_len < dstsize)
		dst_len++;
	while (src[src_len])
		src_len++;
	if (dstsize <= dst_len)
	{
		return (dstsize + src_len);
	}
	append = dstsize - dst_len - 1;
	while (*src && append > 0)
	{
		dst[dst_len++] = *src++;
		append--;
	}
	dst[dst_len] = '\0';
	return (dst_len + src_len);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	char dst[4] = "rerr";
	char src[] = "hel";
	printf("%lu\n", strlcat(dst,src,4));
	printf("%s\n", dst);
	printf("%s\n", src);
	printf("%lu\n", ft_strlcat(dst,src,4));
	printf("%s\n", dst);
	printf("%s\n", src);
}*/