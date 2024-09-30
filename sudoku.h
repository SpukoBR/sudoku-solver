/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 04:24:05 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/30 01:28:53 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# define SIZE 9

void	input_row(int board[SIZE][SIZE], int row);
void	display_board(int board[SIZE][SIZE]);

int		is_valid_row(int board[SIZE][SIZE], int row, int num);
int		is_valid_column(int board[SIZE][SIZE], int col, int num);
int		is_valid_subgrid(int board[SIZE][SIZE], int start_row, int start_col,
			int num);
int		is_valid_move(int board[SIZE][SIZE], int row, int col, int num);

int		find_empty_cell(int board[SIZE][SIZE], int *row, int *col);
int		solve_sudoku(int board[SIZE][SIZE]);

#endif
