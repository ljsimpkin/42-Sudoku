/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 22:05:58 by seli              #+#    #+#             */
/*   Updated: 2018/09/30 22:20:29 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSING_H
# define FT_PARSING_H
# include <unistd.h>
# include "ft_define.h"

void	ft_putchar(char c);
void	ft_puterr(void);
int		is_invalid_input(int ac, char **av);
void	ft_create_board(int ac, char **av, int board[9][9]);
void	print_board(int board[9][9]);

#endif
