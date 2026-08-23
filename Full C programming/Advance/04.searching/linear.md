Linear searching:
-> In linear search we search an element in a given array by traversing the array from the starting till the desire element is not found.

Alogrithm:
step 1: Begain
step 2: set arr[3]
step 3: set lower <- 0, up <- 2, f <- 0
step 4: input searching item
step 5: repeat 6 to 8 while lower <= up
step 6: set mid <- (lower + upper)/2
step 7: if arr[mid] = item then, set f=1 and break
step 8: if arr[mid] < item then, set lower <- mid + 1 else set up <- mid - 1
step 9: if f = 1 then, printf("item found", location = mid), else printf("not found")

 Time complexity:
 -> Best case O(1)
 -> Average case O(n)
 -> Worst case O(n)
 