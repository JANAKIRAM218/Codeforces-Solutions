tc=int(input())
for i in range(tc):
    a,b,c=list(map(int,input().split()))
    if((a+1)==b and (b+1)==c):
        print("YES")
    else:
        print("NO")