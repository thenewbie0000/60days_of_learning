# Python program for implementation of Bogo Sort
import random


# Sorts array a[0..n-1] using Bogo sort
def bogoSort(number):
    attempt = 0
    n = len(number)
    while (is_sorted(number) == False):
        print(attempt)
        shuffle(number)
        attempt += 1


# To check if array is sorted or not
def is_sorted(number):
    n = len(number)
    for i in range(0, n - 1):
        if (number[i] > number[i + 1]):
            return False
    return True


# To generate permutation of the array
def shuffle(number):
    n = len(number)
    for i in range(0, n):
        r = random.randint(0, n - 1)
        number[i], number[r] = number[r], number[i]


# Driver code to test above
number = [3, 2, 4, 1, 0, 5]
bogoSort(number)
print("Sorted array :")
for i in range(len(number)):
    print("%d" % number[i]),

