#!/usr/bin/python3

"""
Returns tuple with length of string and first character

Args:
    length: length of sentence
    first: first letter of sentence

Returns:
    tuple with string length and sentence first character
"""


def multiple_returns(sentence):
    length = len(sentence)
    first = sentence[0]
    if len(sentence) == 0:
        return (length, None)
    else:
        return (length, first)
