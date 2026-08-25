What is queue ?
-> Queue is a linear collection of data item that follows FIFO (first in first order) where insertion and deletion takes places place on opposite end. The insertion end is called REAR and deletion end is called FRONT.

Note:
-> Enqueue :
Insertion of item
-> Dequeue : 
Deletion of item
-> Queue :
Array
linked list

Algorithm :
Write an algorithm for insertion of queue.
step 1: begain
step 2: if REAR = N-1 then print ("overflow and exit")
step 3: Input new item
step 4: Rear <- Rear + 1
step 5: Queue [Rear] <- item
step 6: exit

Write an algorithm for deletion
step 1: begain
step 2: if front = -1 then print ("underdefined and exit")
step 3: set item <- queue [front]
step 4: front <- front + 1
step 5: print("item deleted")
step 6: exit
