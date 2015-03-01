/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mlx.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaniez <emaniez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/20 13:48:34 by emaniez           #+#    #+#             */
/*   Updated: 2015/02/27 21:03:07 by emaniez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MLX_H
# define FT_MLX_H
# include <mlx.h>
# include <math.h>
# include <fcntl.h>
# include <errno.h>
# include <libft.h>

# define K_ESC 65307
# define K_LEFT 65361
# define K_UP 65362
# define K_RIGHT 65363
# define K_DOWN 65364
# define K_PGUP 65365
# define K_PGDWN 65366
# define K_PL 65451
# define K_MIN 65453
# define K_A 97
# define K_B 98
# define K_C 99
# define K_D 100
# define K_G 103
# define K_I 105
# define K_L 108
# define K_O 111
# define K_P 112
# define K_R 114
# define K_S 115
# define K_W 119

# define WIN_W 400
# define WIN_H 400
# define RGB(r, g, b)(256 * 256 * (int)(r) + 256 * (int)(g) + (int)(b))

typedef struct	s_mlx
{
	void		*ptr;
	void		*win;
	void		*img;
	char		*img_addr;
	int			bbp;
	int			endian;
	int			line_size;
	int			zoom;
	int			legend;
	int			imgx;
	int			imgy;
	void		*data;
}				t_env;

typedef struct	s_coord
{
	int			x;
	int			y;
	int			z;
}				t_coord;

typedef struct	s_col
{
	int			r;
	int			g;
	int			b;
}				t_col;

void			mlx_initiate(t_env *mlx, char *name);

void			mlx_draw_img_pix(t_env *mlx, int addr, int color);

void			mlx_draw_line(t_coord one, t_coord two, t_env *mlx, int color);

void			mlx_draw_circle(t_coord *ctr, int rad, t_env *mlx, int color);

int				mlx_coord_2_addr(size_t x, size_t y, t_env *mlx);

#endif
