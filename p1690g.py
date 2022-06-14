


def solve():
    input()
    n, m = tuple(map(int, input().split()))
    a  = list(map(int, input().split()))
    mns = 1
    mn = a[0]
    mna = [mn]
    for i in range(1,n):
        if(a[i]<mn):
            mn = a[i]
            mns+=1    
        mna.append(mn)
    for _ in range(m):
        t, d = tuple(map(int, input().split()))
        
        print(mns)

for _ in range(int(input())):
    solve()