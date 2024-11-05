/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouafik <rmouafik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 12:52:07 by rmouafik          #+#    #+#             */
/*   Updated: 2024/11/04 12:36:14 by rmouafik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_countwords(char const *s, char c)
{
	size_t		count;
	size_t		i;

	count = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	len_word;
	size_t	i;

	i = 0;
	arr = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!s || !arr)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				len_word = ft_strlen(s);
			else
				len_word = ft_strchr(s, c) - s;
			arr[i++] = ft_substr(s, 0, len_word);
			s += len_word;
		}
	}
	arr[i] = NULL;
	return (arr);
}
// int main(void)
// {
// 	char **result;
// 	int i;

// 	printf("Hello  world  this       is 1337\n");
// 	result = ft_split("Hello  world  this       is 1337", ' ');
// 	for (i = 0; result[i]; i++)
// 		printf("Word %d: %s\n", i, result[i]);
// }