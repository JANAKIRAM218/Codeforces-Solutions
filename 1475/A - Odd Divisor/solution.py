n=int(input())
for i in range(n):
    x=int(input())
    while(x%2==0):
        x=x//2 
    if(x==1):
        print("NO")
    else:
        print("YES")