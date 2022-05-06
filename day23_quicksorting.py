numbers = [10, 1, 2, 11, 10, 1000, 2, 3, 999, 455, 12, 1, 13, 14, 15, 16, 14, 14, 13, 15, 15, 16, 16]


def quick_sort(values):
    if len(values) <= 1:
        return values
    less_than_pivot = []
    greater_than_pivot = []
    pivot = values[0]
    for value in values[1:]:
        if value <= pivot:
            less_than_pivot.append(value)
        else:
            greater_than_pivot.append(value)
    print("%15s %1s %-15s" % (less_than_pivot, pivot, greater_than_pivot))
    return quick_sort(less_than_pivot) + [pivot] + quick_sort(greater_than_pivot)


print(numbers)
sorted_numbers = quick_sort(numbers)
print(sorted_numbers)
