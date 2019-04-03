/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 20:03:46 by seli              #+#    #+#             */
/*   Updated: 2018/09/30 23:08:31 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_parsing.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puterr(void)
{
	write(1, "Error\n", 6);
}

int		is_invalid_input(int ac, char **av)
{
	int row;
	int col;
	int count;

	count = 0;
	if (ac != 10)
		return (TRUE);
	row = 1;
	while (row < ac)
	{
		col = 0;
		while (col < 9)
		{
			if (!(av[row][col] == '.'
				|| ('1' <= av[row][col] && av[row][col] <= '9')))
				return (TRUE);
			count += av[row][col] == '.' ? 0 : 1;
			col++;
		}
		if (av[row][col] != '\0')
			return (TRUE);
		row++;
	}
	return (count < 17 ? TRUE : FALSE);
}

void	ft_create_board(int ac, char **av, int board[9][9])
{
	int col;
	int row;

	row = 1;
	while (row < ac)
	{
		col = 0;
		while (col < 9)
		{
			if (av[row][col] == '.')
				board[row - 1][col] = 0;
			else
				board[row - 1][col] = av[row][col] - '0';
			col++;
		}
		row++;
	}
}

void	print_board(int board[9][9])
{
	int col;
	int row;

	col = 0;
	while (col < 9)
	{
		row = 0;
		while (row < 9)
		{
			ft_putchar(board[col][row] + '0');
			if (row < 8)
				ft_putchar(' ');
			row++;
		}
		ft_putchar('\n');
		col++;
	}
}
