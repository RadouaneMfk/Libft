/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouafik <rmouafik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 08:39:48 by rmouafik          #+#    #+#             */
/*   Updated: 2024/11/01 09:26:35 by rmouafik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;
	size_t	total_size;

	total_size = count * size;
	arr = (void *)malloc(total_size);
	if (arr == NULL)
		return (NULL);
	ft_bzero(arr, total_size);
	return (arr);
}
/*int main()
{
	int *arr;
	//arr = (int *)calloc(-1,-1);
	//printf("%d\n", arr[0]);
	arr = (int *)ft_calloc(-1,-1);
	printf("%d\n", arr[0]);
}*/