#https://www.codechef.com/AUG19B/problems/DSTAPLS
test = int(input())
while test:
    n, k = input().split()
    n = int(n)
    k = int(k)
    ans = ""
    ans = "NO" if n%(k*k) == 0 else "YES";
    print(ans)
    test -= 1
