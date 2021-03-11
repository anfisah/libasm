/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoto <ccoto@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 11:07:17 by ccoto             #+#    #+#             */
/*   Updated: 2021/03/11 10:53:19 by ccoto            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <string.h>
#include <errno.h>
#include <unistd.h>
#define BUFFER_SIZE 50

int main(void)
{
	char *src = "Hello Word!";
	char *dst;
	char *dup;
	char buf[BUFFER_SIZE + 1];
	
	printf("valeur errno = %d\n\n", errno);
	/*
	** ft_strlen
	*/
	printf("ft_strlen = %zu\n", ft_strlen("Hello word!"));
	printf("strlen = %zu\n", strlen("Hello word!"));
	printf("ft_strlen = %zu\n", ft_strlen(""));
	printf("strlen = %zu\n\n", strlen(""));
	/*
	** ft_strcpy
	*/
	ft_strcpy(dst, src);
	//strcpy(dst, src);
	printf("ft_strcpy = %s\n\n", dst);
	/*
	** ft_strcmp
	*/
	printf("strcmp1 = %d\n", strcmp("\xff", "\xff\xff"));
	printf("ft_strcmp1 = %d\n", ft_strcmp("\xff", "\xff\xff"));
	printf("strcmp2 = %d\n", strcmp("", ""));
	printf("ft_strcmp2 = %d\n", ft_strcmp("", ""));
	printf("strcmp3 = %d\n", strcmp("Hello World!", "Hello Warld!"));
	printf("ft_strcmp3 = %d\n\n", ft_strcmp("Hello World!", "Hello Warld!"));
	/*
	** ft_write
	*/
	printf("retour write = %zd\n\n", ft_write(1, "ft_write = PP\n", 14));
	/*
	** ft_read
	*/
	printf("%zd\n", ft_read(0, buf, BUFFER_SIZE));
	printf("%zd\n\n", read(0, buf, BUFFER_SIZE));
	/*
	** ft_strdup
	*/
	dup = ft_strdup(src);
	printf("ft_strdup = %s", dup);
	
	return (0);
}