/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 20:21:44 by seli              #+#    #+#             */
/*   Updated: 2018/09/30 22:41:46 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_backtrack.h"

int		next_empty_cell(int board[9][9])
{
	int	i;

	i = 0;
	while (i < 81)
	{
		if (board[i / 9][i % 9] == 0)
			return (i);
		i++;
	}
	return (SOLVED);
}

void	copy_board(int src[9][9], int dst[9][9])
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			dst[i][j] = src[i][j];
			j++;
		}
		i++;
	}
}

int		ft_backtrack(int b[9][9], int s[9][9], int m[9][9][10], int *solution)
{
	int i;
	int guess;

	i = next_empty_cell(b);
	if (i == SOLVED)
	{
		*solution += 1;
		copy_board(b, s);
		return ((*solution == 2) ? (STOP) : (NEXT));
	}
	guess = 0;
	while (++guess <= 9)
	{
		if (m[i / 9][i % 9][guess] == NOT_POSSIBLE)
			continue;
		if (is_guess_valid(b, i / 9, i % 9, guess))
		{
			b[i / 9][i % 9] = guess;
			if (ft_backtrack(b, s, m, solution) == STOP)
				return (STOP);
			b[i / 9][i % 9] = 0;
		}
	}
	return (NEXT);
}
