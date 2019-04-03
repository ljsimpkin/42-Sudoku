/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 20:41:02 by seli              #+#    #+#             */
/*   Updated: 2018/09/30 22:47:39 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_main.h"

int		main(int ac, char **av)
{
	int	solutions;
	int	board[9][9];
	int	solved_board[9][9];
	int	matrix[9][9][10];

	solutions = 0;
	ft_initialize(board, solved_board, matrix);
	if (is_invalid_input(ac, av))
	{
		ft_puterr();
		return (0);
	}
	ft_create_board(ac, av, board);
	ft_imperative_sudoku(board, matrix);
	ft_backtrack(board, solved_board, matrix, &solutions);
	if (solutions == 1)
		print_board(solved_board);
	else
		ft_puterr();
	return (0);
}

void	ft_initialize(int b[9][9], int s[9][9], int m[9][9][10])
{
	int row;
	int col;
	int number;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			b[row][col] = 0;
			s[row][col] = 0;
			number = -1;
			while (++number <= 9)
			{
				m[row][col][number] = 0;
			}
			col++;
		}
		row++;
	}
}
