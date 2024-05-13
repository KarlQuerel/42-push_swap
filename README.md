

## Table of Contents
- [About](#about)
- [Usage](#usage)
- [Supported Format Specifiers](#supported-format-specifiers)
- [Example Usage](#example-usage)


## About
The `ft_printf` function is a fundamental part of the C standard library, responsible for formatted output. It allows for precise control over how data is formatted and printed to the standard output stream.


## Installation
1. Clone this repository.
2. Navigate to the root directory of the project.
3. Compile the library using `make`.
4. Include the `ft_printf.h` header file in your C source files.

## Usage
```c
int	ft_printf(format, ...);
```
To use `ft_printf` in your C programs, call the `ft_printf` function in your code, passing the desired format string and any additional arguments.

Here's a basic example of how to use `ft_printf`:

```c
#include "ft_printf.h"

int main()
{
	ft_printf("Hello, %s!\n", "world");
	return 0;
}
```
                                 |

For more information, refer to the [subject PDF](https://github.com/KarlQuerel/ft_printf/blob/master/docs/en.subject.pdf).

SHIT STARTS HERE
---

<a id="top"></a>
# push_swap
`push_swap` is a sorting algorithm project where the goal is to sort a stack of integers using a set of predefined operations with the smallest number of operations possible.

## Table of Contents

- [Introduction](#introduction)
- [Rules](#rules)
- [Installation](#installation)
- [Usage](#usage)
- [Algorithm](#algorithm)


## Introduction
In the Push Swap project, two stacks are provided: A and B. Stack A contains a random list of integers, while stack B remains empty. The objective is to sort stack A in ascending order using a limited set of operations.

## Rules
The following operations are allowed:
- **sa**: Swap the first two elements of stack A.
- **sb**: Swap the first two elements of stack B.
- **ss**: Execute **sa** and **sb** simultaneously.
- **pa**: Push the first element from stack B to stack A.
- **pb**: Push the first element from stack A to stack B.
- **ra**: Rotate stack A - move all elements up by one. The first element becomes the last.
- **rb**: Rotate stack B - move all elements up by one. The first element becomes the last.
- **rr**: Execute **ra** and **rb** simultaneously.
- **rra**: Reverse rotate stack A - move all elements down by one. The last element becomes the first.
- **rrb**: Reverse rotate stack B - move all elements down by one. The last element becomes the first.
- **rrr**: Execute **rra** and **rrb** simultaneously.

## Installation

1. Clone this repository to your local machine.
2. Navigate to the project directory.
3. Compile the program using `make`.

## Usage

To run the program, execute the following command:

./push_swap [list of integers]



Replace `[list of integers]` with the integers you want to sort, separated by spaces.

Example:

./push_swap 5 3 8 1 6




## Algorithm

The Push Swap project challenges students to devise efficient sorting algorithms using the provided operations. Students often experiment with various sorting techniques, such as insertion sort, quicksort, or merge sort, to minimize the number of operations required to sort the stack.


[Back to Top](#top)