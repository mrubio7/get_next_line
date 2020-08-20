/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrubio <mrubio@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 11:03:10 by mrubio            #+#    #+#             */
/*   Updated: 2020/08/20 11:23:15 by mrubio           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

int				get_next_line(int fd, char **line);
char			*ft_strldup(const char *src, int x);
int				ft_strchr_num(char *s, int c);
char			*ft_strjoin(char *s1, char const *s2);
size_t			ft_strlen(const char *str);
void			*ft_memcpy(void *dest, const void *src, unsigned int n);







# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

#endif
