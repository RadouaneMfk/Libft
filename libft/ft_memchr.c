/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouafik <rmouafik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:48:53 by rmouafik          #+#    #+#             */
/*   Updated: 2024/10/29 12:01:35 by rmouafik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*b;
	size_t			i;

	b = (unsigned char *)s;
	i = 0;
	while (b[i] && i < n)
	{
		if (b[i] == (unsigned char)c)
		{
			return (&b[i]);
		}
		i++;
	}
	return (NULL);
}
/*#include <string.h>
int main()
{
	char s[] = "he llo";
	int c = 'l';
	printf("%s\n", memchr(s, c, 4));
	printf("%s", ft_memchr(s, c, 4));
	
}*/