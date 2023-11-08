/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmunoz-c <cmunoz-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:58:37 by cmunoz-c          #+#    #+#             */
/*   Updated: 2023/11/02 13:41:57 by cmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char		*ft_strchr(char *s, int c);
char		*ft_strjoin(char *stor, char *buffer);
char		*ft_read(int fd, char *storage);
char		*get_next_line(int fd);
char		*ft_get_line(char *storage);
size_t		ft_strlen(char *e);
size_t		ft_strlcpy(char *dest, char *src, size_t n);
char		*ft_nextstr(char *storage);

#endif