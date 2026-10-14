n=int(input())
for i in range(n):
    x=input()
    l=len(x)
    y=9*(l-1)
    o=x[0]*len(x)
    if(int(o)<=int(x)):
        print(y+int(o[0]))
    else:
        print(y+int(o[0])-1)