/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yigsahin <yigsahin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 20:33:35 by yigsahin          #+#    #+#             */
/*   Updated: 2024/11/27 10:46:28 by yigsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 8096
# endif

# include <stdlib.h>
# include <unistd.h>

size_t	length(char *str);

int		check_line(char *buffer);

char	*get_next_line(int fd);
char	*read_line(int fd, char *buffer);
char	*new_line(char *buffer);
char	*new_buffer(char *buffer);
char	*string_join(char *str1, char *str2);

#endif
