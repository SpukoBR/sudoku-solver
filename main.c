/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 04:20:46 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/30 01:51:56 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	input_row(int board[SIZE][SIZE], int row)
{
	char	input[20];
	char	*token;
	int		num;
	int		col;

	col = 0;
	printf("row %d: ", row);
	fgets(input, sizeof(input), stdin);
	token = strtok(input, " ");
	while (token != NULL && col < SIZE)
	{
		num = atoi(token);
		board[row][col] = num;
		col++;
		token = strtok(NULL, " ");
	}
}

int	main(void)
{
	int	board[9][9];
	int	i;

	i = 0;
	while (i < 9)
	{
		input_row(board, i);
		i++;
	}
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
