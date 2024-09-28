/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 04:15:04 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/28 04:42:55 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	is_valid_row(int board[SIZE][SIZE], int row, int num)
{
	int	col;

	col = 0;
	while (col < SIZE)
	{
		if (board[row][col] == num)
			return (0);
		col++;
	}
	return (1);
}

int	is_valid_column(int board[SIZE][SIZE], int col, int num)
{
	int	row;

	row = 0;
	while (row < SIZE)
	{
		if (board[row][col] == num)
			return (0);
		row++;
	}
	return (1);
}

int	is_valid_subgrid(int board[SIZE][SIZE], int start_row, int start_col,
		int num)
{
	int	row;
	int	col;

	row = 0;
	while (row < 3)
	{
		col = 0;
		while (col < 3)
		{
			if (board[start_row + row][start_col + col] == num)
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}
