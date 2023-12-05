#!/usr/bin/python3

def add_tuple(tuple_a=(), tuple_b=()):
    """
    Adds two tuples.

    Args:
        tuple_a: The first tuple.
        tuple_b: The second tuple.

    Returns:
        A tuple with 2 integers:
        First element is an addition of the first element of each argument
        Second element is an addition of the second element of each argument
    """

    if len(tuple_a) == 0:
        a1, a2 = 0, 0
    elif len(tuple_a) == 1:
        a1, a2 = tuple_a[0], 0
    elif len(tuple_a) == 2:
        a1, a2 = tuple_a[0], tuple_a[1]
    else:
        a1, a2 = tuple_a[0], tuple_a[1]

    if len(tuple_b) == 0:
        b1, b2 = 0, 0
    elif len(tuple_b) == 1:
        b1, b2 = tuple_b[0], 0
    elif len(tuple_b) == 2:
        b1, b2 = tuple_b[0], tuple_b[1]
    else:
        b1, b2 = tuple_b[0], tuple_b[1]

    new_tuple = (a1 + b1, a2 + b2)

    return (new_tuple)
