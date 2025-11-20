/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zshuo <zshuo@student.42prague.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 16:29:56 by zshuo             #+#    #+#             */
/*   Updated: 2025/11/20 17:48:36 by zshuo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// #include <stdio.h>

// size_t	ft_strlen(const char *s)
// {
// 	size_t	len = 0;

// 	while (s[len])
// 		len++;
// 	return (len);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dst_len = 0;
	while (dst_len < size && dst[dst_len])
	{
		dst_len++;
	}
	if (dst_len == size)
		return (dst_len + src_len);
	i = 0;
	while (i < (size - dst_len - 1) && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
// int	main(void)
// {
// 	// 准备缓冲区：总大小为 30
// 	// 初始化内容为 "Hello"，后面都是 \0
// 	char	buffer[30] = "Hello";
// 	char	src[] = " World";
// 	size_t	ret;

// 	printf("=== 初始状态 ===\n");
// 	printf("Buffer: [%s]\n\n", buffer);

// 	// -------------------------------------------------
// 	// 测试 1: 空间充足 (size = 30)
// 	// -------------------------------------------------
// 	// 预期: 变成 "Hello World"
// 	// 返回: 5("Hello") + 6(" World") = 11
// 	char buff1[30] = "Hello";
// 	ret = ft_strlcat(buff1, src, 30);
// 	printf("Test 1 [空间充足]:\n");
// 	printf("Result: [%s]\n", buff1);
// 	printf("Return: %zu (Expected: 11)\n\n", ret);

// 	// -------------------------------------------------
// 	// 测试 2: 发生截断 (size = 8)
// 	// -------------------------------------------------
// 	// 原有 "Hello" (5)，size 是 8。
// 	// 剩余空间: 8 - 5 - 1(给\0) = 2 个字符
// 	// 应该追加 " W"
// 	// 预期: "Hello W"
// 	// 返回: 5 + 6 = 11 (告诉我们需要 11 个空间才能存下)
// 	char buff2[30] = "Hello";
// 	ret = ft_strlcat(buff2, src, 8);
// 	printf("Test 2 [发生截断 size=8]:\n");
// 	printf("Result: [%s]\n", buff2); // 应该只有 "Hello W"
// 	printf("Return: %zu (Expected: 11)\n\n", ret);

// 	// -------------------------------------------------
// 	// 测试 3: 空间极小 (size = 3)
// 	// -------------------------------------------------
// 	// 原有 "Hello" (5)，但我们欺骗函数说 buffer 只有 3 大小。
// 	// 函数一看 3 < 5，认为 buffer 已经炸了，完全不碰内存。
// 	// 返回: size(3) + src(6) = 9
// 	char buff3[30] = "Hello";
// 	ret = ft_strlcat(buff3, src, 3);
// 	printf("Test 3 [空间极小 size=3]:\n");
// 	printf("Result: [%s] (Should be unchanged)\n", buff3);
// 	printf("Return: %zu (Expected: 9)\n", ret);

// 	return (0);
// }
