/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_board_part1.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 04:34:47 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/28 04:37:27 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	initialize_row_0(int board[9][9])
{
	board[0][0] = 5;
	board[0][1] = 3;
	board[0][2] = 0;
	board[0][3] = 0;
	board[0][4] = 7;
	board[0][5] = 0;
	board[0][6] = 0;
	board[0][7] = 0;
	board[0][8] = 0;
}

void	initialize_row_1(int board[9][9])
{
	board[1][0] = 6;
	board[1][1] = 0;
	board[1][2] = 0;
	board[1][3] = 1;
	board[1][4] = 9;
	board[1][5] = 5;
	board[1][6] = 0;
	board[1][7] = 0;
	board[1][8] = 0;
}

void	initialize_row_2(int board[9][9])
{
	board[2][0] = 0;
	board[2][1] = 9;
	board[2][2] = 8;
	board[2][3] = 0;
	board[2][4] = 0;
	board[2][5] = 0;
	board[2][6] = 0;
	board[2][7] = 6;
	board[2][8] = 0;
}
