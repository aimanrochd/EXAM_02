*This project has been created as part of the 42 curriculum by arochd.*

# Push_Swap

## Description

Push_swap is an algorithmic project that consists of sorting a stack of integers using
the smallest possible number of operations, under strict constraints.

The program starts with an unsorted list of integers stored in stack a and must sort
them in ascending order using only a second stack (b) and a limited set of allowed
operations (swap, push, rotate, and reverse rotate).

The goal of this project is to design an efficient sorting strategy while respecting the
rules, focusing on algorithm optimization, stack manipulation, and performance.

## Instructions

### Compilation

To compile the project, run:

```bash
make

This will generate the executable:

push_swap

Execution

Run the program by passing a list of integers as arguments:

./push_swap 2 1 3 6 5 8

The output will be a list of operations that sorts the numbers.
If the list is already sorted, the program produces no output.

Notes :

Only integers within the C int range are accepted:

-2147483648 to 2147483647

Duplicate numbers are not allowed

Invalid input will display an Error message

Resources :

https://www.geeksforgeeks.org/stack-data-structure/

https://en.wikipedia.org/wiki/Sorting_algorithm/


AI Usage

ChatGPT was used as a support tool for:

Clarifying edge cases related to stack operations

Discussing algorithmic concepts and optimization ideas

Improving the clarity and structure of this README