def rotate(arr ,k):
    n=len(arr)
    k=k%n
    arr[:]= arr[-k:]+arr[:-k]
    return arr

arrval=input("Enter the elements of the array: ")
arr=list(map(int, arrval.strip().split()))

k=int(input("Enter the number of steps you want to rotate your array by: "))
rotatedarr=rotate(arr, k)
print("Rotated array:", rotatedarr)
