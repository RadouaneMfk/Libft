/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouafik <rmouafik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:06:48 by rmouafik          #+#    #+#             */
/*   Updated: 2024/10/28 18:43:51 by rmouafik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	b;

	b = (char)c;
	while (*s)
	{
		if (*s == b)
		{
			return ((char *)s);
		}
		s++;
	}
	if (b == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
/*#include <stdio.h>
//#include <string.h>
int main()
{
    char str[] = "helAhh";
    int c = '5';
    printf("%s\n",strchr(str, c));
	printf("%s" ,ft_strchr(str, c));
}*/