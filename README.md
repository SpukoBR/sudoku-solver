# Sudoku Solver

Este é um projeto de um resolvedor de Sudoku desenvolvido em C. Ele recebe um tabuleiro de Sudoku parcialmente preenchido e tenta resolver o quebra-cabeça usando uma abordagem de força bruta com retrocesso (backtracking). O programa verifica a validade das jogadas e exibe o tabuleiro inicial e o resolvido (se houver solução).

## Estrutura do Projeto

Os arquivos do projeto estão organizados da seguinte forma:

- `main.c`: Função principal que inicializa o tabuleiro, chama o solver e exibe o resultado.
- `initialize_board_part1.c`, `initialize_board_part2.c`, `initialize_board_part3.c`: Funções para inicializar o tabuleiro de Sudoku com valores predefinidos.
- `sudoku.h`: Cabeçalhos que contêm as declarações de funções e definições de constantes.
- `sudoku_board.c`: Funções para exibir e manipular o tabuleiro.
- `sudoku_check.c`: Funções para verificar a validade das jogadas.
- `sudoku_solver.c`: Implementação do algoritmo de solução de Sudoku usando retrocesso.
- `sudoku_validate.c`: Funções auxiliares para validar as jogadas feitas no tabuleiro.
- `Makefile`: Arquivo Makefile para compilar o programa.
- `LICENSE`: Licença MIT para o projeto.

## Como Compilar

Para compilar o projeto, certifique-se de que você tenha o GCC instalado e rode o comando abaixo no terminal:

```bash
make
```

Isso gerará o executável `sudoku`.

## Como Executar

Após a compilação, você pode rodar o programa com o seguinte comando:

```bash
./sudoku
```

O programa exibirá o tabuleiro inicial e, se possível, a solução do Sudoku.

## Exemplo de Saída

```
Initial Sudoku board:
0 1 9 | 0 0 2 | 0 0 0 
4 7 0 | 6 9 0 | 0 0 1 
0 0 0 | 4 0 0 | 0 9 0 
---------------------
8 9 4 | 5 0 7 | 0 0 0 
0 0 0 | 0 0 0 | 0 0 0 
0 0 0 | 2 0 1 | 9 5 8 
---------------------
0 5 0 | 0 0 6 | 0 0 0 
6 0 0 | 0 2 8 | 0 7 9 
0 0 0 | 1 0 0 | 8 6 0 

Solved Sudoku board:
5 1 9 | 8 7 2 | 6 4 3 
4 7 2 | 6 9 3 | 5 8 1 
3 6 8 | 4 5 1 | 7 9 2 
---------------------
8 9 4 | 5 6 7 | 1 2 3 
7 2 5 | 9 3 4 | 8 1 6 
1 3 6 | 2 8 1 | 9 5 8 
---------------------
2 5 1 | 7 4 6 | 3 8 7 
6 4 7 | 3 2 8 | 4 7 9 
9 8 3 | 1 4 9 | 8 6 5 
```

## Licença

Este projeto está licenciado sob a [Licença MIT](LICENSE).

## Créditos

Baseado nos tutoriais:
- [YouTube Playlist](https://www.youtube.com/playlist?list=PLkTXsX7igf8edTYU92nU-f5Ntzuf-RKvW)
- [GitHub Repository](https://github.com/wadsworj/sudoku_tut)
