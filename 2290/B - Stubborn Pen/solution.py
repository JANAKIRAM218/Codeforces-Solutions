n=int(input())
for i in range(n):
    ls=int(input())
    s=input()
    count=0
    if(s[0]!='R'):
        count+=1
    for i in range(1,ls):
        if(s[i-1]==s[i]):
            count+=1
    print(count)
        