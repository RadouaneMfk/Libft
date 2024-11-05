/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouafik <rmouafik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 12:36:57 by rmouafik          #+#    #+#             */
/*   Updated: 2024/11/05 12:26:10 by rmouafik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	num_dig(int n)
{
	size_t	count;

	if (n <= 0)
		count = 1;
	else
		count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	unsigned int	num;

	len = num_dig(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		num = -n;
	}
	else
		num = n;
	while (len-- > (n < 0) ? 1 : 0)
	{
		str[len] = (num % 10) + 48;
		num /= 10;
	}
	return (str);
}
/*int main()
{
	int n = -15;
	printf("%s", ft_itoa(n));
}*/