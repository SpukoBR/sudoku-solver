/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 04:19:50 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/28 04:43:39 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	find_empty_cell(int board[SIZE][SIZE], int *row, int *col)
{
	*row = 0;
	while (*row < SIZE)
	{
		*col = 0;
		while (*col < SIZE)
		{
			if (board[*row][*col] == 0)
				return (1);
			(*col)++;
		}
		(*row)++;
	}
	return (0);
}

int	solve_sudoku(int board[SIZE][SIZE])
{
	int	row;
	int	col;
	int	num;

	if (!find_empty_cell(board, &row, &col))
		return (1);
	num = 1;
	while (num <= 9)
	{
		if (is_valid_move(board, row, col, num))
		{
			board[row][col] = num;
			if (solve_sudoku(board))
				return (1);
			board[row][col] = 0;
		}
		num++;
	}
	return (0);
}
