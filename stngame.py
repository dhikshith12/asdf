t = int(input())
while(t>0):
    t-=1
    n = int(input())
    a = str(input())
    b = str(input())

    a = "".join(sorted(a))
    b = "".join(sorted(b,reverse=True))
    c = ""
    for i in range(n):
        c+=a[i]
        c+=b[i]
    print(c)
