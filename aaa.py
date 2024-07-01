a=[1,23,4,23,1,2,3,4,5,6,12]
a.append(0)
p=[0]*len(a)
c=1
j=0
for i in range(0,len(a)-1):

if a[i]<a[i+1]:c=c+1

else:p[j]=c;j=j+1;c=1
print(max(p))