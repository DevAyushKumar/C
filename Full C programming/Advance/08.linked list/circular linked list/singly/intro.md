Circular linked list:
-> If a last node of singly linked list hold the address of start node it is called circular singly linked list

Algorithm:
-> insert item at begin  -> delete
-> at ending             -> delete
-> at any position       -> delete

WAP to traverse the element of circular singly linked list up to given times
step 1: begain
step 2: i <- st, j <- 0
step 3: repeat step 4 to 7 while i < 2
step 4: print data[i]
step 5: i <- link[i]
step 6: if i = st then st i <- j + 1
step 7: exit
