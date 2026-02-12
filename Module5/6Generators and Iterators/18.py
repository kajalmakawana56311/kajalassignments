# 18.	Write a Python program that uses a custom iterator to iterate over a list of integers.

# Generator to iterate over a list
def my_iterator(nums):
    for n in nums:
        yield n


numbers = [1, 2, 3, 4, 5]

for i in my_iterator(numbers):
    print(i)
