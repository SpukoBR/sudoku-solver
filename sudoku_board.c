/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_board.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peda-cos <peda-cos@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 04:13:37 by peda-cos          #+#    #+#             */
/*   Updated: 2024/09/28 04:57:14 by peda-cos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	input_board(int board[SIZE][SIZE], int input[SIZE][SIZE])
{
	int	i;
	int	j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			board[i][j] = input[i][j];
			j++;
		}
		i++;
	}
}

void	display_board(int board[SIZE][SIZE])
{
	int	i;
	int	j;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			if (j == 3 || j == 6)
				printf("| ");
			printf("%d ", board[i][j]);
			j++;
		}
		printf("\n");
		if (i == 2 || i == 5)
			printf("---------------------\n");
		i++;
	}
}
