/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 22:00:14 by seli              #+#    #+#             */
/*   Updated: 2018/09/30 22:22:12 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DEFINE_H
# define FT_DEFINE_H

# define POSSIBLE 0
# define NOT_POSSIBLE 1
# define TRUE 1
# define FALSE 0
# define SOLVED -1
# define STOP 1
# define NEXT 0
# define SHOW(X) matrix[row][col][X] == 0 ? X + '0' : ' '
# define ROW(X, Y) ((Y / 3) * 3 + X / 3)
# define COL(X, Y) ((Y / 3) * 3 + X % 3)
# define BOXR(X, Y) ((X / 3) * 3 + Y / 3)
# define BOXC(X, Y) ((X % 3) * 3 + Y % 3)

#endif
