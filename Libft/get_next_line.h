/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmylonas <dmylonas@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 10:43:28 by dmylonas          #+#    #+#             */
/*   Updated: 2021/10/07 10:20:09 by dmylonas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define MAX_FD 4069
# define BUFFER_SIZE 42
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>	
# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>

size_t	ft_strlen_until(const char *s, char c);
int		based_on_ft_strchr(const char *s);
char	*gnl_ft_strjoin(char const *s1, char const *s2);
char	*setter_without(char *line, char *holder);
char	*ft_strjoin_with(char const *s1, char const *s2);
char	*gnl_ft_substr(char const *s, unsigned int start, size_t len);
void	kinda_ft_strlcpy(char *dst, const char *src);
char	*setter_with(char *line, char holder[]);

char	*get_next_line(int fd);

#endif