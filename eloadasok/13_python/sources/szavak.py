#!/usr/bin/env python3

INPUT = "words.txt"

def main():
    f = open(INPUT, "r")

    for line in f:
        line = line.rstrip("\n")
        words = line.split()
        for word in words:
            if len(word) >= 2 and word[0] == word[-1]:
                print(word)

    f.close()

##############################################################################

if __name__ == "__main__":
    main()
