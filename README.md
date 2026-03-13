# Stack Vs Heap

## Stack
1. Stack is used to store return address, local variables and return values.
2. Stack grows downwords
3. Only the function to which stack is assigned can access its memory

## Heap
1. Heap is used to store malloc, calloc and relloc memory
2. Heap grows upward
3. Memory can be accessed by any module of the program
4. Not ISO26262 compliant, as it may leads to many problems such as Memory fragmentation

## Stack Vs Heap Collision
1. As stack grows downwards and heap grows upward, it they grow beyond thier size they both can collide.

2. It leads to undefined behavior such as memory corruption, faults and exception
