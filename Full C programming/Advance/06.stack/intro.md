What is stack ?
-> Stack is linear collection of data items that follows LIFO (last in first order) where insertion and deletion take place one on end called TOP of the stack.

Note:
-> Push:
Insertion of item
-> Pop:
Deletion of item
-> Stack:
array
linked list

Algorithm (PUSH):
step 1: begain
step 2: If TOP = N then print("Overflow and exit")
step 3: input new item
step 4: TOP = TOP + 1
step 5: stack[TOP] <- item
step 6: exit

Alogrithm (POP):
step 1: begain
step 2: if TOP = 1 then print("underflow and exit")
step 3: set item <- stack[TOP]
step 4: TOP <- TOP - 1
step 5: print ("item deleted")
step 6: exit

Applications of stack:
-> Memory management
-> function call
-> expression evaluate
-> back tracking
-> browser history
-> task management
