/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoto <ccoto@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 11:07:17 by ccoto             #+#    #+#             */
/*   Updated: 2021/03/05 15:00:02 by ccoto            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <string.h>

int main(void)
{
	printf("strlen = %d\n", ft_strlen("Hello word!"));
	ft_write(1, "write = PP\n", 11);
	printf("strcmp = %d\n", ft_strcmp("hellal", "hellpl"));
	printf("strcmp = %d\n", strcmp("hellal", "hellpl"));
	return (0);
}