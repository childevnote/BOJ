import sys

read = sys.stdin.readline
def solution():
    tc = []
    while True:
        num = [list(map(int, read().split()))]
        if num[0] == 0:
            break
        else:
            tc.append(num)
    print(tc)
solution()