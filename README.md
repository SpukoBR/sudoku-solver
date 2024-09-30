# Sudoku Solver

This is a Sudoku solver project developed in C. It takes a partially filled Sudoku board from the user and attempts to solve the puzzle using a backtracking approach. The program checks the validity of moves and displays both the initial board and the solved board (if a solution exists).

## Project Structure

The project files are organized as follows:

- `main.c`: Main function that initializes the board, calls the solver, and displays the result.
- `sudoku.h`: Headers containing function declarations and constant definitions.
- `sudoku_board.c`: Functions for displaying and manipulating the board.
- `sudoku_check.c`: Functions to check the validity of moves.
- `sudoku_solver.c`: Implementation of the Sudoku solving algorithm using backtracking.
- `sudoku_validate.c`: Helper functions to validate moves made on the board.
- `Makefile`: Makefile to compile the program.
- `LICENSE`: MIT License for the project.

## How to Compile

To compile the project, ensure you have GCC installed and run the command below in the terminal:

\```
make
\```

This will generate the executable `sudoku`.

## How to Run

After compilation, you can run the program with the following command:

\```
./sudoku
\```

The program will prompt you to enter the rows of the Sudoku board, displaying the initial board and, if possible, the solution to the Sudoku puzzle.

## Example Output

\```
row 0: 0 1 9 0 0 2 0 0 0
row 1: 4 7 0 6 9 0 0 0 1
row 2: 0 0 0 4 0 0 0 9 0
row 3: 8 9 4 5 0 7 0 0 0
row 4: 0 0 0 0 0 0 0 0 0
row 5: 0 0 0 2 0 1 9 5 8
row 6: 0 5 0 0 0 6 0 0 0
row 7: 6 0 0 0 2 8 0 7 9
row 8: 0 0 0 1 0 0 8 6 0

Solved Sudoku board:
3 1 9 | 7 8 2 | 6 4 5
4 7 2 | 6 9 5 | 3 8 1
5 8 6 | 4 1 3 | 2 9 7
---------------------
8 9 4 | 5 3 7 | 1 2 6
1 2 5 | 8 6 9 | 7 3 4
7 6 3 | 2 4 1 | 9 5 8
---------------------
2 5 8 | 9 7 6 | 4 1 3
6 4 1 | 3 2 8 | 5 7 9
9 3 7 | 1 5 4 | 8 6 2
\```

## License

This project is licensed under the [MIT License](LICENSE).

## Credits

Based on tutorials by James Wadsworth:
- [YouTube Playlist](https://www.youtube.com/playlist?list=PLkTXsX7igf8edTYU92nU-f5Ntzuf-RKvW)
- [GitHub Repository](https://github.com/wadsworj/sudoku_tut)
