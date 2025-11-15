/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zshuo <zshuo@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 18:38:03 by zshuo             #+#    #+#             */
/*   Updated: 2025/11/15 19:02:50 by zshuo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*start = s;

	while (*s)
		s++;
	while (*s != (char)c && s >= start)
		s--;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
