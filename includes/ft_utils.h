/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jejeong <jejeong@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 15:57:58 by jejeong           #+#    #+#             */
/*   Updated: 2021/03/20 17:33:21 by jejeong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include <unistd.h>

int		ft_putchar(char c, int fd);
char	*ft_strchr(const char *str, int c);
int		ft_is_num(char c);
int		ft_str_len_num(char *str);
int		ft_put_str_num(char *str);

#endif
