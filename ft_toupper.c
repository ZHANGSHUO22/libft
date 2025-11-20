/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zshuo <zshuo@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 18:39:01 by zshuo             #+#    #+#             */
/*   Updated: 2025/11/20 19:11:16 by zshuo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
// int main(void)
// {
// 	int sa = 'f';
// 	int sa1 = 'F';
// 	int sa2 = '9';

// 	printf("%c\n",ft_toupper(sa));
// 	printf("%c\n",ft_toupper(sa1));
// 	printf("%c\n",ft_toupper(sa2));
// }
