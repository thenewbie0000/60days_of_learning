from msilib.schema import ODBCAttribute
from numpy import number


def sum(numbers):
    if not numbers:
        return 0
    print("Callling sum(%s)" % numbers[1:])
    remaining_sum = sum(numbers[1:])
    print("Calling to sum(%s) returning %d + %d" % (numbers, numbers[0], remaining_sum))
    return numbers[0] + remaining_sum

print(sum([1,2,3,4,5]))

