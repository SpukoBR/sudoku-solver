/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_board_part3.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 04:36:43 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/28 04:37:52 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	initialize_row_6(int board[9][9])
{
	board[6][0] = 0;
	board[6][1] = 6;
	board[6][2] = 0;
	board[6][3] = 0;
	board[6][4] = 0;
	board[6][5] = 0;
	board[6][6] = 2;
	board[6][7] = 8;
	board[6][8] = 0;
}

void	initialize_row_7(int board[9][9])
{
	board[7][0] = 0;
	board[7][1] = 0;
	board[7][2] = 0;
	board[7][3] = 4;
	board[7][4] = 1;
	board[7][5] = 9;
	board[7][6] = 0;
	board[7][7] = 0;
	board[7][8] = 5;
}

void	initialize_row_8(int board[9][9])
{
	board[8][0] = 0;
	board[8][1] = 0;
	board[8][2] = 0;
	board[8][3] = 0;
	board[8][4] = 8;
	board[8][5] = 0;
	board[8][6] = 0;
	board[8][7] = 7;
	board[8][8] = 9;
}

void	initialize_board(int board[9][9])
{
	initialize_row_0(board);
	initialize_row_1(board);
	initialize_row_2(board);
	initialize_row_3(board);
	initialize_row_4(board);
	initialize_row_5(board);
	initialize_row_6(board);
	initialize_row_7(board);
	initialize_row_8(board);
}
