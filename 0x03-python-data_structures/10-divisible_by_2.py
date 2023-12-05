#!/usr/bin/python3
"""
find the multiples of 2

Args:
    list_result is the new list
    my-list is the original list

Returns:
    returns the boolean result of each element's division by 2
"""


def divisible_by_2(my_list=[]):
    list_result = []

    for i in range(len(my_list)):
        if my_list[i] % 2 == 0:
            list_result.append(True)
        else:
            list_result.append(False)
    return (list_result)
