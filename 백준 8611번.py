
flag=0
j=2
def changeandcheck(k, n):
    i=0
    nam=0
    temp=n
    while(temp>=k):
        nam+=(temp%k) * (10**i)
        temp=temp//k
        i+=1
    nam+=temp*(10**i)
    return nam
    
scan=int(input());
while j<=10:
    result=changeandcheck(j, scan)
    ori=str(result)
    if ori==ori[::-1]:
        flag+=1
        print(j, result)
    j+=1

    
if flag==0:
    print("NIE")


'''k=2
while(k<10)
print(a)'''

