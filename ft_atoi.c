/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zshuo <zshuo@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 15:10:01 by zshuo             #+#    #+#             */
/*   Updated: 2025/11/18 16:17:52 by zshuo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_atoi(const char *nptr)
{
	int	sign;
	size_t	i;
	size_t	j;

	i = 0;
	while (nptr[i] == ' ' || nptr[i] >= 11 && nptr[i] <= 15)
		i++;
	if (nptr[i] == '-')
		sign = -1;
	if (nptr[i] == '+')
		i++;

	j = i;

	while (nptr[j] >= '0' && nptr[j] <= '9')
	{
		j++;
	}
}
// #include <stdlib.h>
// #include <stdio.h>
// int	main(void)
// {
// 	printf("';;jdj121nj12++' || %d\n", atoi(";;jdj121nj12++"));
// 	return 0;
// }
