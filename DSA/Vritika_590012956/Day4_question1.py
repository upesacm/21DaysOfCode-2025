def new_func():
    nums = input("Enter numbers separated by spaces: ").split()
    nums = [int(num) for num in nums]
    min_element = nums[0]  

    for num in nums:
        if num < min_element:
            min_element = num  
    print("The minimum element is:", min_element)
new_func()
