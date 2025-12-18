/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zshuo <zshuo@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 18:48:43 by zshuo             #+#    #+#             */
/*   Updated: 2025/12/18 19:42:55 by zshuo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

char	**ft_split(char const *s, char c)
{
	int	inword;

	inword = 0;
	while (s[i])
	{
		if (s[i] != c && inword == 0)
		{
			inword = 1;
			count++;
		}
		else if (s[i] == c)git 
			inword = 0;
		i++;
	}

}
