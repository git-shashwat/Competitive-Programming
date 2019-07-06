test = int(input())
while test > 0:
    n = int(input())
    flag = 0
    sum = 0
    a = input()
    a = a.split(' ')
    for i in range(n):
        a[i] = float(a[i])
        sum += a[i]
    mean = sum/n
    ans = sum - mean*(n-1)
    for i in range(n):
        if (a[i] == ans):
            flag = 1
            print(i+1)
            break
    if (flag == 0):
        print("Impossible")
    test -= 1
