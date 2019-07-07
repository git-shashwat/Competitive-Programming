#https://www.codechef.com/JULY19B/submit/MMAX
import math
test = int(input())
while test > 0:
    n = int(input())
    k = int(input())
    if n == k:
        ans = 0
    elif n < k:
        rem = k%n
        ans = 2*min(rem, n-rem)
        if n == 2*rem:
            ans -= 1
    else:
        ans = 2*min(k, n-k)
        if n == 2*k:
            ans -= 1
    print(ans)
    test -= 1
