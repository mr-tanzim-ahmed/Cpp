# C++ Algorithms and Data Structures

This repository is a collection of small, standalone C++ examples covering
algorithms, data structures, and programming fundamentals. Each `.cpp` file is
an independent program; many have their own `main()` function, so compile and
run examples individually.

## Algorithms

| Example | Topic |
| --- | --- |
| [BFS](Algorithm/BFS.cpp) | Breadth-first graph traversal using an adjacency list, a FIFO queue, and a visited array. |
| [Connected Components with DFS](Algorithm/Connected_Components_DFS.cpp) | Finds and traverses each connected component of an undirected graph with iterative depth-first search. |
| [DFS](Algorithm/DFS.cpp) | Iterative depth-first graph traversal using an adjacency list, an explicit stack, and a visited array. |
| [Disjoint Set](Algorithm/DisjointSet.cpp) | Disjoint-set (union-find) parent forest with `find` and `union`, used to detect a cycle while processing edges. |
| [Floyd-Warshall](Algorithm/FloydWarshall.cpp) | Reserved for the all-pairs shortest-path algorithm; this file is currently an incomplete stub and does not implement the algorithm. |
| [Greedy Coin Change](Algorithm/GreedyCoin.cpp) | Greedy change-making: sorts denominations from largest to smallest and takes as many as possible of each. This strategy is not optimal for every coin system. |
| [Kruskal's Algorithm](Algorithm/Kruskal.cpp) | Builds a minimum spanning forest by sorting weighted edges and using a disjoint set to skip cycle-forming edges. |
| [Merge Sort](Algorithm/MergeSort.cpp) | Recursive divide-and-conquer sorting with a merge step. Typical time: O(n log n); auxiliary space: O(n). |
| [Quick Sort](Algorithm/QuickSort.cpp) | Recursive quicksort using the last element as the partition pivot. Average time: O(n log n); worst case: O(n^2). |
| [Topological Ordering](Algorithm/Topological_Ordering.cpp) | DFS finishing order with a stack for topological ordering of a directed acyclic graph (DAG). |

## Data structures and related examples

| Example | Topic |
| --- | --- |
| [Binary Search](<Data Structure/Binary_Search.cpp>) | Iterative binary search over a sorted array. |
| [Stack Using an Array](<Data Structure/Making_Stack_Using_Array.cpp>) | Fixed-capacity array stack with `push` and `pop` operations (LIFO). |
| [Stack Example](<Data Structure/Stack_LinkedList.cpp>) | Demonstrates stack operations and a dynamically allocated backing array. Despite its filename, it is not a linked-list stack. |
| [Queue Example](<Data Structure/Queue_LinkedList.cpp>) | Fixed-capacity circular array queue with `enqueue` and `dequeue` operations (FIFO). Despite its filename, it is not a linked-list queue. |
| [Singly Linked List](<Data Structure/linked_list.cpp>) | Node structure and examples of traversal, insertion, appending, and removal. |
| [Postfix Expression Evaluation](<Data Structure/postfix_expression_evaluation.cpp>) | Evaluates a single-digit postfix expression using `std::stack`. |
| [Delete an Array Element](<Data Structure/Deletion_Arrays_Element.cpp>) | Removes an element from an array by shifting later elements. |
| [Pointer Traversal](<Data Structure/pointer_traversing.cpp>) | Allocates an integer array dynamically and traverses it with pointer arithmetic. |

## Sorting examples

| Example | Topic |
| --- | --- |
| [Bubble Sort](<Data Structure/Bubble_Sort.cpp>) | Comparison sort that repeatedly swaps adjacent out-of-order elements. |
| [Insertion Sort](<Data Structure/Insertion_Sort.cpp>) | Insertion-sort implementation intended to insert each element into the sorted prefix. |

## Other programming examples

| Example | Topic |
| --- | --- |
| [Fox and Snake Pattern](<Data Structure/FoxAndSnake_pattern.cpp>) | Prints the alternating horizontal-and-turn pattern from the Fox and Snake problem. |
| [Maximum of Four](<Data Structure/max_of_four.cpp>) | Reads four integers and returns their maximum. |
| [Structures and Typedefs](<Data Structure/typedef_struct.cpp>) | Defines student and name records with `struct`/`typedef`, then assigns a grade from a mark. |
| [Structure and Union](<Data Structure/union.cpp>) | Compares the storage sizes of a structure and a union containing the same members. |

## Notes

- These are learning examples, not a single application or a production-ready
  library. Some examples are incomplete or contain implementation issues; in
  particular, the Floyd-Warshall file is unfinished, and some stack, linked-list,
  insertion-sort, and structure/union examples need correction before they can
  be relied on or compiled successfully.
- Graph examples use integer vertex IDs and read graph data from standard
  input; check each source file for its expected input format and indexing.
- The disjoint-set implementations use a basic parent forest without path
  compression or union by rank/size.
