#https://www.codechef.com/JUNE19B/problems/RSIGNS
import math
MOD = 1000000007
def power_calculator(x,y):
    res = 1
    while y >  0:
        if y&1:
            res = (res*x)%MOD
        y = y>>1
        x = (x*x)%MOD
    return res
test = int(input())
while test > 0:
    k = int(input())
    res = (power_calculator(2,k)*5)%MOD
    print(res)
    test-=1
