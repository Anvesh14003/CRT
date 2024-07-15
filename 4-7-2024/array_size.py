N = int(input("Enter the size of the array: "))
A = list(map(int,input("Enter the elements of array in list1: ").split()))
B = list(map(int, input("Enter the elements of array in list2: ").split()))
if(sorted(A)==sorted(B)):
    print(1)
else:
    print(0)