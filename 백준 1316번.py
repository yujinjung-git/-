<<<<<<< HEAD
test=int(input())
i=0
j=0
e=0
gnum=test
for i in range(test):
    inputchar=input()
    check=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
    for j in range(1,len(inputchar)):
        if(inputchar[j]==inputchar[j-1]):
            if(j!=len(inputchar)-1): continue
            else:
                csum=ord(inputchar[j])-97
                check[csum]+=1
                break
            
        else:
            if(j==len(inputchar)-1):
                csum=ord(inputchar[j])-97
                check[csum]+=1

            
        csum=ord(inputchar[j-1])-97
        check[csum]+=1
        
    for j in range(0, len(check)):
        if(check[j]>1):
            gnum-=1
            break
    
print(gnum)
=======
test=int(input())
i=0
j=0
e=0
gnum=test
for i in range(test):
    inputchar=input()
    check=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0]
    for j in range(1,len(inputchar)):
        if(inputchar[j]==inputchar[j-1]):
            if(j!=len(inputchar)-1): continue
            else:
                csum=ord(inputchar[j])-97
                check[csum]+=1
                break
            
        else:
            if(j==len(inputchar)-1):
                csum=ord(inputchar[j])-97
                check[csum]+=1

            
        csum=ord(inputchar[j-1])-97
        check[csum]+=1
        
    for j in range(0, len(check)):
        if(check[j]>1):
            gnum-=1
            break
    
print(gnum)
>>>>>>> d5d6cbdef12e8413fcc63e74167dd7a38a35dda5
