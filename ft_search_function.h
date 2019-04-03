/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_function.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 21:58:29 by seli              #+#    #+#             */
/*   Updated: 2018/09/30 22:24:50 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SEARCH_FUNCTION_H
# define FT_SEARCH_FUNCTION_H
# include "ft_define.h"
# include "ft_imperative_sudoku.h"

void	ft_cell(int b[9][9], int m[9][9][10], int *updated);
void	ft_row(int b[9][9], int m[9][9][10], int number, int *updated);
void	ft_col(int b[9][9], int m[9][9][10], int number, int *updated);
void	ft_box(int b[9][9], int m[9][9][10], int number, int *updated);

#endif
