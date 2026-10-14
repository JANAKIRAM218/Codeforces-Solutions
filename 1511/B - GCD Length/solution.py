n=int(input())
for i in range(n):
    a,b,c=map(int,input().split())
    g=10**(c-1)
    x=(10**(a-c))*g
    y=(10**(b-c)+1)*g 
    print(x,y)