a=[1,2,3,4,0,1,34,11,15,19,0]
r=len(a)
a.append(-1)
c=1
for i in range(0,len(a)-1):
    
    if a[i]<a[i+1]:c=c+1
    
    elif (a[i]>a[i+1])or(a[i]==-1):
        if c<r:r=c
       #print('->',c)
        c=1
    
print(r)
