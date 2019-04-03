/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 22:09:08 by seli              #+#    #+#             */
/*   Updated: 2018/09/30 22:25:24 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BACKTRACK_H
# define FT_BACKTRACK_H
# include "ft_define.h"
# include "ft_valid_sudoku.h"

int		next_empty_cell(int board[9][9]);
void	copy_board(int src[9][9], int dst[9][9]);
int		ft_backtrack(int b[9][9], int s[9][9], int m[9][9][10], int *solution);

#endif
