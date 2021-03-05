/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccoto <ccoto@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 11:06:48 by ccoto             #+#    #+#             */
/*   Updated: 2021/03/05 13:35:51 by ccoto            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int		ft_strlen(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
char	*stpcpy(char * dst, const char * src);
ssize_t	read(int fildes, void *buf, size_t nbyte);
ssize_t	ft_write(int fildes, const void *buf, size_t nbyte);
char	*strdup(const char *s1);

#endif

