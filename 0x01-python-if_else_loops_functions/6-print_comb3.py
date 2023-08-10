#!/usr/bin/python3

for firstN in range(10):
    for secN in range(firstN + 1, 10):
        if firstN == 8 and secN == 9:
            print("{}{}".format(firstN, secN))
        else:
            print("{}{}, ".format(firstN, secN), end="")
