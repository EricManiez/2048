/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 10:11:03 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/27 21:02:35 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <stdarg.h>
# include <libft.h>

# define CONV_SPEC "sSpdDioOuUxXcC"
# define PRINTF_CHARS "sSpdDioOuUxXcC#0123456789-+. lzjh"

int		ft_printf_parser(const char *format, char **ret, char **cs, int prog);

int		ft_printf(const char *format, ...);

void	ft_printf_typedef(char *cs, char **str, va_list ap);

void	ft_printf_read_loop(char **str, va_list ap, char *format);

void	ft_printf_width_mgmt(char *cs, char **s, va_list cpy, int width);

int		ft_printf_sign_print(char *cs, char **s, va_list cpy);

void	ft_printf_pre_print(char *cs, char **s, va_list cpy);

void	ft_printf_string_mgmt(char **s, va_list ap, char *cs);

size_t	ft_printf_len_calc(va_list cpy, char *cs);

size_t	ft_printf_width_parse(char *cs);

int		ft_printf_prec_parse(char *cs);

void	ft_printf_post_print(char *cs, char **s, va_list cpy);

char	*ft_printf_itoa(long n, int absoluter);

#endif
