/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zshuo <zshuo@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 18:10:22 by zshuo             #+#    #+#             */
/*   Updated: 2025/11/20 18:37:44 by zshuo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// #include <stdio.h>
// #include <string.h>

// size_t	ft_strlen(const char *s)
// {
// 	size_t	len = 0;

// 	while (s[len])
// 		len++;
// 	return (len);
// }

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}
// int	main(void)
// {
// 	const char *str1 = "Hello World";
// 	const char *str2 = "Hello World";
// 	const char *str3 = "Hello A";
// 	const char *str4 = "abc";
// 	const char *str5 = "abcd"; // 测试长度差异
// 	const char *str6 = "\200"; // 测试扩展 ASCII (负数陷阱)
// 	const char *str7 = "\0";

// 	printf("=== ft_strncmp 测试 ===\n");
// 	printf("格式: [您的结果] vs [标准库结果]\n\n");

// 	// 测试 1: 完全相同的字符串
// 	printf("Test 1 (相同): %d vs %d\n",
// 		ft_strncmp(str1, str2, 20), strncmp(str1, str2, 20));

// 	// 测试 2: 字符串不同，但 n 限制在了不同之前
// 	// "Hello World" vs "Hello A", 只比前 5 个字符 ("Hello")
// 	printf("Test 2 (n限制): %d vs %d\n",
// 		ft_strncmp(str1, str3, 5), strncmp(str1, str3, 5));

// 	// 测试 3: 字符串不同，n 覆盖到了不同之处
// 	// 'W' (87) vs 'A' (65) -> 应该是正数
// 	printf("Test 3 (不同): %d vs %d\n",
// 		ft_strncmp(str1, str3, 10), strncmp(str1, str3, 10));

// 	// 测试 4: 长度不一致 (您之前的代码在这里会出错)
// 	// "abc" vs "abcd", n=5
// 	// 比较到 s1 的 '\0' 和 s2 的 'd' -> 0 - 100 = -100
// 	printf("Test 4 (长短): %d vs %d\n",
// 		ft_strncmp(str4, str5, 5), strncmp(str4, str5, 5));

// 	// 测试 5: 扩展 ASCII (Unsigned Char 测试)
// 	// \200 (128) vs \0 (0)
// 	// 如果用 char (有符号) 比较，\200 是 -128，结果会是负数 (错)
// 	// 如果用 unsigned char 比较，\200 是 128，结果是正数 (对)
// 	printf("Test 5 (符号): %d vs %d\n",
// 		ft_strncmp(str6, str7, 1), strncmp(str6, str7, 1));

// 	return (0);
// }
