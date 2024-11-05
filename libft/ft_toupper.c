/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouafik <rmouafik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:47:58 by rmouafik          #+#    #+#             */
/*   Updated: 2024/10/27 17:58:22 by rmouafik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}
/*#include <ctype.h>
#include <stdio.h>
int main()
{
	int c = 'i';
	printf("%c\n" , toupper(c));
	printf("%c\n" , ft_toupper(c));
}*/