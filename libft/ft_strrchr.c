/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouafik <rmouafik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:12:25 by rmouafik          #+#    #+#             */
/*   Updated: 2024/10/28 19:10:43 by rmouafik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		b;
	const char	*last;

	last = NULL;
	b = (char)c;
	while (*s)
	{
		if (*s == b)
		{
			last = s;
		}
		s++;
	}
	if (last)
	{
		return ((char *)last);
	}
	if (b == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int main()
{
	char str[] = "hAeleAhh";
	int c = 'A';
	printf("%s\n",strrchr(str, c));
	printf("%s" ,ft_strrchr(str, c));
}*/