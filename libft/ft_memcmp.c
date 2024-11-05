/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouafik <rmouafik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 12:02:12 by rmouafik          #+#    #+#             */
/*   Updated: 2024/11/05 10:40:15 by rmouafik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str1[i] != '\0' && i < n)
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	if ((str1[i] == '\0') || (str2[i] == '\0'))
		return (0);
	return (str1[i] - str2[i]);
}
// int main()
// {
// 	char s1[] = "hello5o";
// 	char s2[] = "455";
// 	printf("%d\n",memcmp(s1, NULL, 1));
// 	printf("%d\n",ft_memcmp(s1, NULL, 1));
// }