def round_num(n):
    empty=[]
    x=1
    count=0
    while(n>0):
        lst=n%10
        if(lst!=0):
            empty.append(lst*x)
            count+=1
        x*=10
        n=n//10
    print(count)
    print(*empty)
        
    
n=int(input())
for i in range(n):
    number=int(input())
    round_num(number)
    