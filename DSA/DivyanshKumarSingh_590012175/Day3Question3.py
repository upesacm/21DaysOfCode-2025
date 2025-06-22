def secondLargest(lst):
    uNum = list(set(lst))  
    
    if len(uNum) < 2:
        return -1  
    
    uNum.sort(reverse=True)  
    return uNum[1]  


lst = list(map(int, input("Enter array elements separated by space: ").split()))
print("Second largest unique:", secondLargest(lst))
