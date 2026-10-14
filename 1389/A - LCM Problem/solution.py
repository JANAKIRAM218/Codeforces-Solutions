n=int(input())
for i in range(n):
    l,m=map(int,input().split())
    if(l*2<=m):
        print(l,2*l)
    else:
        print(-1,-1)