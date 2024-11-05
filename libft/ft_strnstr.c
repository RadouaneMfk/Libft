/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouafik <rmouafik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:51:53 by rmouafik          #+#    #+#             */
/*   Updated: 2024/10/30 22:40:17 by rmouafik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while ((i + j) < len && haystack[i + j] == needle[j])
			{
				if (haystack[i + j] == needle[j])
				{
					return ((char *)&haystack[i + j]);
				}
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
/*int main()
{
	char hay[] = "ggdlfftrg";
	char found[] = "v";
	printf("%s\n",strnstr(hay, found, 0));
	printf("%s\n",ft_strnstr(hay, found, 0));
}*/