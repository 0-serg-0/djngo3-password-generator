n=10000

a=[0]*(n+2)
a[0]=1
a[1]=1

for i in range(0,n):
	a[i+2]=a[i]+a[i+1]
print(a)