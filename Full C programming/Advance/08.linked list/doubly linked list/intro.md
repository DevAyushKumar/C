Doubly linked list:
-> Doubly linked list is the linear collection of data item called node where each node has divided into three parts

Note:
-> Data part store data items
-> next part store the address of next node
-> previous part store the address of previous node
-> doubly linked list start with special pointer called first pointer, ending with the last pointer
-> It allows us to peroform traversing in both way "forward and backward"

Algorithm:
-> Insert item at beginning 
-> Insert item at ending
-> Insert at any position 
-> Delete item from beginning
-> Delete from ending
-> Delete item from any location
-> show
-> exit

WAP to insert an item at beginning of doubly linked list:
step 1: begain
step 2: if fr = NULL then print("overflow")
step 3: Input new item
step 4: set new <- fr, fr <- newxt[fr]
step 5: data[new] <- item
step 6: next[new] <- first
step 7: previous[new] <- NULL
step 8: previous[first] <- new
step 9: first <- new
step 10: exit