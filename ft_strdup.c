/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zshuo <zshuo@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 15:16:27 by zshuo             #+#    #+#             */
/*   Updated: 2025/12/18 19:12:23 by zshuo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	ptr = malloc(s_len + 1);
	if (!ptr)
		return (NULL);
	ptr = ft_memcpy(ptr, s, s_len + 1);
	return (ptr);
}
