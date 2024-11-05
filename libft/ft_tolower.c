/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouafik <rmouafik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:00:18 by rmouafik          #+#    #+#             */
/*   Updated: 2024/10/27 18:02:23 by rmouafik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}
/*#include <ctype.h>
#include <stdio.h>
int main()
{
	int c = 'd';
	printf("%c\n" , tolower(c));
	printf("%c\n" , ft_tolower(c));
}*/