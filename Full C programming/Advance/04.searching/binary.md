Binary search:
-> Binary searching is the divide amd conqurer searching technique in which we have to arrange the data in particular order before searching operation. After that we find mid element of array and compare with target element.

Algorithm:
step 1: begain
step 2: set arr[3]
step 3: set lower<- 0, up<- 2, f<- 0
step 4: input searching item 
step 5: repeat 6 to 8 will lower <= up
step 6: set mid <- (lower + up)/2
step 7: if arr[mid] = item then, set f=1 and break
step 8: if arr[mid] < item then, set lower <- mid + 1 else set up <- mid - 1
step 9: if f=1 then, printf("item found") location = mid else printf("not found")