/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 04:24:05 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/28 04:51:12 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <stdio.h>
# define SIZE 9

void	initialize_board(int board[SIZE][SIZE]);

void	initialize_row_0(int board[SIZE][SIZE]);
void	initialize_row_1(int board[SIZE][SIZE]);
void	initialize_row_2(int board[SIZE][SIZE]);
void	initialize_row_3(int board[SIZE][SIZE]);
void	initialize_row_4(int board[SIZE][SIZE]);
void	initialize_row_5(int board[SIZE][SIZE]);
void	initialize_row_6(int board[SIZE][SIZE]);
void	initialize_row_7(int board[SIZE][SIZE]);
void	initialize_row_8(int board[SIZE][SIZE]);

void	input_board(int board[SIZE][SIZE], int input[SIZE][SIZE]);
void	display_board(int board[SIZE][SIZE]);

int		is_valid_row(int board[SIZE][SIZE], int row, int num);
int		is_valid_column(int board[SIZE][SIZE], int col, int num);
int		is_valid_subgrid(int board[SIZE][SIZE], int start_row, int start_col,
			int num);
int		is_valid_move(int board[SIZE][SIZE], int row, int col, int num);

int		find_empty_cell(int board[SIZE][SIZE], int *row, int *col);
int		solve_sudoku(int board[SIZE][SIZE]);

#endif
