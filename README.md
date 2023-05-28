 <h1 align="center">C - Sorting algorithms & Big O</h1>

<h1 align="center">
  <p align="center"><img width=60% src="https://miro.medium.com/v2/resize:fit:4800/format:webp/1*yiyfZodqXNwMouC0-B0Wlg.png"></p>
  <br>
</h1>

<hr></hr>

## 📖 Table of Contents
- [Description](#description)
- [Requirements](#requirements)
- [Functions](#functions)
- [Usage](#usage)
- [Tasks](#tasks)
  + [0. Bubble sort](#0-bubble-sort)
  + [1. Insertion sort](#1-insertion-sort-list)
  + [2. Selection sort](#2-selection-sort)
  + [3. Quick sort](#3-quick-sort)
- [Description files](#description-files)
- [Contributors](#contributors)

# Description
Allows you to understand how different sorting algorithms work and how the computational complexity of an algorithm affects its execution time and the overall efficiency of the system in which it is being used.

# Requirements
This project has been tested on Ubuntu 20.04 LTS

- Programming language C
- Style guidelines: [Betty Style](https://github.com/holbertonschool/Betty)

# Functions

+ For this project you are given the following `print_array`, and `print_list` functions:

~~~c
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}
~~~

~~~c
#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
~~~

## Usage

+ 📥 First clone the repository:
```bash
https://github.com/SharifAli645/holbertonschool-sorting_algorithms.git
```
 
+ Go into directory you've clone with `cd`: 
```bash 
cd ./holbertonschool-sorting_algorithms
```
+ Then compile the code with `gcc` and some flags: 
```bash
gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble
```

## Tasks

### 0. Bubble sort
Compiled: `gcc -Wall -Wextra -Werror -pedantic 0-bubble_sort.c 0-main.c print_array.c -o bubble`
~~~bash
root@ubuntu:~/holbertonschool-sorting_algorithms$ ./bubble
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 71, 13, 52, 99, 96, 73, 86, 7
19, 48, 71, 13, 52, 96, 99, 73, 86, 7
19, 48, 71, 13, 52, 96, 73, 99, 86, 7
19, 48, 71, 13, 52, 96, 73, 86, 99, 7
19, 48, 71, 13, 52, 96, 73, 86, 7, 99
19, 48, 13, 71, 52, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 96, 73, 86, 7, 99
19, 48, 13, 52, 71, 73, 96, 86, 7, 99
19, 48, 13, 52, 71, 73, 86, 96, 7, 99
19, 48, 13, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 86, 7, 96, 99
19, 13, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 7, 73, 86, 96, 99
13, 19, 48, 52, 7, 71, 73, 86, 96, 99
13, 19, 48, 7, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
root@ubuntu:~/holbertonschool-sorting_algorithms$
~~~
### 1. Insertion sort
Compiled: `gcc -Wall -Wextra -Werror -pedantic 1-main.c 1-insertion_sort_list.c print_list.c -o insertion`
~~~bash
root@ubuntu:~/holbertonschool-sorting_algorithms$ ./insertion
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

19, 48, 71, 99, 13, 52, 96, 73, 86, 7
19, 48, 71, 13, 99, 52, 96, 73, 86, 7
19, 48, 13, 71, 99, 52, 96, 73, 86, 7
19, 13, 48, 71, 99, 52, 96, 73, 86, 7
13, 19, 48, 71, 99, 52, 96, 73, 86, 7
13, 19, 48, 71, 52, 99, 96, 73, 86, 7
13, 19, 48, 52, 71, 99, 96, 73, 86, 7
13, 19, 48, 52, 71, 96, 99, 73, 86, 7
13, 19, 48, 52, 71, 96, 73, 99, 86, 7
13, 19, 48, 52, 71, 73, 96, 99, 86, 7
13, 19, 48, 52, 71, 73, 96, 86, 99, 7
13, 19, 48, 52, 71, 73, 86, 96, 99, 7
13, 19, 48, 52, 71, 73, 86, 96, 7, 99
13, 19, 48, 52, 71, 73, 86, 7, 96, 99
13, 19, 48, 52, 71, 73, 7, 86, 96, 99
13, 19, 48, 52, 71, 7, 73, 86, 96, 99
13, 19, 48, 52, 7, 71, 73, 86, 96, 99
13, 19, 48, 7, 52, 71, 73, 86, 96, 99
13, 19, 7, 48, 52, 71, 73, 86, 96, 99
13, 7, 19, 48, 52, 71, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
root@ubuntu:~/holbertonschool-sorting_algorithms$
~~~
### 2. Selection sort
Compiled: `gcc -Wall -Wextra -Werror -pedantic 2-main.c 2-selection_sort.c print_array.c -o select`
~~~bash
root@ubuntu:~/holbertonschool-sorting_algorithms$ ./select
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

7, 48, 99, 71, 13, 52, 96, 73, 86, 19
7, 13, 99, 71, 48, 52, 96, 73, 86, 19
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 48, 71, 52, 96, 73, 86, 99
7, 13, 19, 48, 52, 71, 96, 73, 86, 99
7, 13, 19, 48, 52, 71, 73, 96, 86, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
root@ubuntu:~/holbertonschool-sorting_algorithms$
~~~
### 3. Quick sort
Compiled: `gcc -Wall -Wextra -Werror -pedantic 3-main.c 3-quick_sort.c print_array.c -o quick`
~~~bash
root@ubuntu:~/holbertonschool-sorting_algorithms$ ./quick
19, 48, 99, 71, 13, 52, 96, 73, 86, 7

7, 48, 99, 71, 13, 52, 96, 73, 86, 19
7, 13, 99, 71, 48, 52, 96, 73, 86, 19
7, 13, 19, 71, 48, 52, 96, 73, 86, 99
7, 13, 19, 71, 48, 52, 73, 96, 86, 99
7, 13, 19, 71, 48, 52, 73, 86, 96, 99
7, 13, 19, 48, 71, 52, 73, 86, 96, 99
7, 13, 19, 48, 52, 71, 73, 86, 96, 99

7, 13, 19, 48, 52, 71, 73, 86, 96, 99
root@ubuntu:~/holbertonschool-sorting_algorithms$
~~~

## Description files

|  #  | File                                          |   Description   |
|-----|-----------------------------------------------|-----------------|     
|  1  |[sort.h](./sort.h)                             | All prototypes and includes  |
|  2  |[0. Bubble sort](./0-bubble_sort.c)            | Write a function that sorts an array of integers in ascending order using the Bubble      |
|  3  |[1. Insertion sort](./1-insertion_sort_list.c) | Write a function that sorts a doubly linked list of integers in ascending order using the Insertion |
|  4  |[2. Selection sort](./2-selection_sort.c)      | Write a function that sorts an array of integers in ascending order using the Selection   |
|  5  |[3. Quick sort](./3-quick_sort.c)              | Write a function that sorts an array of integers in ascending order using the Quick       |


<hr></hr>

<div align="center">
  <h1><strong>Contributors</strong></h1>
</div>

+ Josue Cerrón [@xiayudev](https://github.com/xiayudev)
- Sharif Abuhadba [@SharifAli645](https://github.com/SharifAli645)
* Helder Guevara [@Ghelder](https://github.com/Ghelder)
