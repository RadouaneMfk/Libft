/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouafik <rmouafik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 09:24:45 by rmouafik          #+#    #+#             */
/*   Updated: 2024/11/05 12:20:10 by rmouafik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*b, int c, size_t	len)
{
	char			*ptr;
	size_t			i;

	ptr = (char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (char)c;
		i++;
	}
	return (b);
}
/*#include <stdio.h>
int main()
{
	char s[] = "hello";
    int c = 40;
    size_t len = 3;
    printf("%s", ft_memset(s, c, len));
}*/
