/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zshuo <zshuo@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 17:46:33 by zshuo             #+#    #+#             */
/*   Updated: 2025/12/14 22:28:36 by zshuo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

// void	ft_putnub(int nb)
// {
// 	if (nb >= 10)
// 		ft_putnub(nb / 10);
// 	char	c;
// 	c = (nb % 10) + '0';
// 	write(1, &c, 1);
// }

// int	main(void)
// {
// 	int	result;
// 	result = ft_strlen("df87GH.DFJK");
// 	ft_putnub(result);
// 	return (0);
// }
// 算字符串长度
