/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouafik <rmouafik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:32:04 by rmouafik          #+#    #+#             */
/*   Updated: 2024/11/02 12:51:15 by rmouafik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	index;
	char	*str;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, s1[i]) && i <= j)
		i++;
	while (ft_strchr(set, s1[j]) && j >= 0)
		j--;
	if (i >= j)
		return (ft_strdup(""));
	str = (char *)malloc(j - i + 1);
	if (!str)
		return (NULL);
	index = 0;
	while (i <= j)
	{
		str[index++] = s1[i++];
	}
	str[i] = '\0';
	return (str);
}
/*int main()
{
	char s1[] = "!!!abchelloabc!!!";
	char set[] = "!";
	printf("%s", ft_strtrim(s1, set));
}*/