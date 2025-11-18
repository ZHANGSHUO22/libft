/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zshuo <zshuo@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 22:18:57 by zshuo             #+#    #+#             */
/*   Updated: 2025/11/18 15:54:49 by zshuo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	small_len;

	if (*small == '\0')
		return ((char *)big);
	small_len = ft_strlen(small);
	if (small_len > len)
		return (NULL);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == small[0])
		{
			j = 0;
			while (j < small_len && (i + j) < len && big[i + j] == small[j])
			{
				j++;
			}
			if (j == small_len)
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
