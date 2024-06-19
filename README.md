<a id="top"></a>

# push_swap
`push_swap` is a sorting algorithm project where the goal is to sort a stack of integers using a set of predefined operations, aiming to achieve this with the smallest number of operations possible..

## Table of Contents
- [Introduction](#introduction)
- [Rules](#rules)
- [Installation](#installation)
- [Usage](#usage)
- [Algorithm](#algorithm)

## Introduction
In the Push Swap project, two stacks are provided: A and B. Stack A contains a random list of integers, while stack B remains empty. The objective is to sort stack A in ascending order using a limited set of operations.

## Rules
The project entails implementing the following operations: 
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
1. Clone this repository to your local machine:
	```sh
	git clone https://github.com/KarlQuerel/42-push_swap.git
	```

2. Navigate to the project directory:
	```sh
	cd push_swap
	```

3. Compile the project using `make`:
	```sh
	make
	```

## Usage
To run the program, execute the following command:

```bash
./push_swap [list of integers]
```

Replace `[list of integers]` with the integers you want to sort, separated by spaces. Example:
```bash
./push_swap 5 3 8 1 6
```
## Algorithm
The Push Swap project challenges students to devise efficient sorting algorithms using the provided operations. In my implementation, the [radix sort algorithm](https://en.wikipedia.org/wiki/Radix_sort) is utilized, leveraging bit shifting for efficient processing.

Radix sort is a non-comparative sorting algorithm that sorts integers by processing individual bits or digits. It starts from the least significant bit (LSB) and moves towards the most significant bit (MSB), sorting the elements into buckets based on each bit position.

For more information, refer to the [subject PDF](https://github.com/KarlQuerel/42-push_swap/blob/master/docs/en.subject.pdf).


[Back to Top](#top)
