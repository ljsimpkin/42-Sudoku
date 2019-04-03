/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_sudoku.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 22:01:41 by seli              #+#    #+#             */
/*   Updated: 2018/09/30 22:05:07 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VALID_SUDOKU_H
# define FT_VALID_SUDOKU_H
# include "ft_define.h"

int		is_row_valid(int board[9][9], int row, int guess);
int		is_column_valid(int board[9][9], int col, int guess);
int		is_box_valid(int board[9][9], int row, int col, int guess);
int		is_guess_valid(int b[9][9], int row, int col, int guess);

#endif
