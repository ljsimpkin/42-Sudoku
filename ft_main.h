/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 22:11:45 by seli              #+#    #+#             */
/*   Updated: 2018/09/30 22:22:19 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAIN_H
# define FT_MAIN_H
# include "ft_define.h"
# include "ft_valid_sudoku.h"
# include "ft_parsing.h"
# include "ft_imperative_sudoku.h"
# include "ft_backtrack.h"

int		main(int ac, char **av);
void	ft_initialize(int b[9][9], int s[9][9], int m[9][9][10]);

#endif
