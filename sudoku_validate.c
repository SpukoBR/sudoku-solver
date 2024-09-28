/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_validate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 04:17:29 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/28 04:43:59 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	is_valid_move(int board[SIZE][SIZE], int row, int col, int num)
{
	if (!is_valid_row(board, row, num))
		return (0);
	if (!is_valid_column(board, col, num))
		return (0);
	if (!is_valid_subgrid(board, row - row % 3, col - col % 3, num))
		return (0);
	return (1);
}
