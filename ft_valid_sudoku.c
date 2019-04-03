/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_sudoku.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:24:46 by lisimpki          #+#    #+#             */
/*   Updated: 2018/09/30 22:02:45 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_valid_sudoku.h"

int		is_row_valid(int board[9][9], int row, int guess)
{
	int i;

	i = -1;
	while (++i < 9)
		if (board[row][i] == guess)
			return (FALSE);
	return (TRUE);
}

int		is_column_valid(int board[9][9], int col, int guess)
{
	int i;

	i = -1;
	while (++i < 9)
		if (board[i][col] == guess)
			return (FALSE);
	return (TRUE);
}

int		is_box_valid(int board[9][9], int row, int col, int guess)
{
	int i;

	i = -1;
	while (++i < 9)
		if (board[ROW(i, row)][COL(i, col)] == guess)
			return (FALSE);
	return (TRUE);
}

int		is_guess_valid(int b[9][9], int row, int col, int guess)
{
	if (is_row_valid(b, row, guess)
		&& is_column_valid(b, col, guess)
		&& is_box_valid(b, row, col, guess))
		return (TRUE);
	return (FALSE);
}
