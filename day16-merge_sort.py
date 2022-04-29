from heapq import merge


def merge_sort(list):
    """
    Sorts a list in ascending order
    Returns a new sorted list

    Divide; Find the midpoint of the list: Divide into sublists
    Conquer: Recursively sort of sublists created in provious sizep
    """

    if len(list) <= 1:
        return list
    left_half, right_half =  split(list)
    left = merge_sort(left_half)
    right = merge_sort(right_half)

    return merge(left, right)

def split(list):
    """
    Divides the unsorted list ata a midpointinto sublists.
    Returns two subtitils  = "left and right
    """

    mid = (len(list))//2
    left = list[:mid]
    right = list[mid: ]

    return left, right

def merge(left,right):
    """
    This function merges two list or array sorting them in the process 
    Returns a new target list
    """
    l = []
    i = 0
    j = 0
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            l.append(left[i])
            i += 1
        else:
            l.append(right[j])
            j += 1




