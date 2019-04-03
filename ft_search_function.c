/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_function.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 19:47:39 by seli              #+#    #+#             */
/*   Updated: 2018/09/30 22:23:46 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_search_function.h"

void	ft_row(int b[9][9], int m[9][9][10], int number, int *updated)
{
	int	row;
	int col;
	int	count;

	row = -1;
	while (++row < 9)
	{
		col = -1;
		count = 0;
		while (++col < 9)
			if (m[row][col][number] == POSSIBLE)
				count++;
		col = -1;
		if (count != 1)
			continue;
		while (++col < 9)
		{
			if (m[row][col][number] == POSSIBLE)
			{
				b[row][col] = number;
				ft_update(b, m, row, col);
				*updated = TRUE;
			}
		}
	}
}

void	ft_col(int b[9][9], int m[9][9][10], int number, int *updated)
{
	int	row;
	int col;
	int	count;

	col = -1;
	while (++col < 9)
	{
		row = -1;
		count = 0;
		while (++row < 9)
			if (m[row][col][number] == POSSIBLE)
				count++;
		row = -1;
		if (count != 1)
			continue;
		while (++row < 9)
		{
			if (m[row][col][number] == POSSIBLE)
			{
				b[row][col] = number;
				ft_update(b, m, row, col);
				*updated = TRUE;
			}
		}
	}
}

void	ft_box(int b[9][9], int m[9][9][10], int number, int *updated)
{
	int	i;
	int j;
	int	count;

	i = -1;
	while (++i < 9)
	{
		j = -1;
		count = 0;
		while (++j < 9)
			if (m[BOXR(i, j)][BOXC(i, j)][number] == POSSIBLE)
				count++;
		j = -1;
		if (count != 1)
			continue;
		while (++j < 9)
		{
			if (m[BOXR(i, j)][BOXC(i, j)][number] == POSSIBLE)
			{
				b[BOXR(i, j)][BOXC(i, j)] = number;
				ft_update(b, m, BOXR(i, j), BOXC(i, j));
				*updated = TRUE;
			}
		}
	}
}

void	ft_cell(int b[9][9], int m[9][9][10], int *updated)
{
	int i;
	int number;

	i = -1;
	while (++i < 81)
	{
		if (b[i / 9][i % 9] != 0
			|| m[i / 9][i % 9][0] + 1 != 9)
			continue;
		number = 0;
		while (++number <= 9)
		{
			if (m[i / 9][i % 9][number] != POSSIBLE)
				continue;
			b[i / 9][i % 9] = number;
			ft_update(b, m, i / 9, i % 9);
			*updated = TRUE;
		}
	}
}
