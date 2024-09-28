/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 04:20:46 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/28 04:38:25 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	main(void)
{
	int	board[9][9];

	initialize_board(board);
	printf("Initial Sudoku board:\n");
	display_board(board);
	if (solve_sudoku(board))
	{
		printf("\nSolved Sudoku board:\n");
		display_board(board);
	}
	else
	{
		printf("\nNo solution exists for the given Sudoku board.\n");
	}
	return (0);
}
