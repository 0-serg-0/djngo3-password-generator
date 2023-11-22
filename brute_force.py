def f(x,y):
	k=[0]*n
	man=len(x)-1
	while True:
		c=''
		for i in range(y):
			c=c+x[k[i]]
		print(c)
		if c =='qwerty':print(1);break

		j=y-1
		while (j>=0 and k[j]==man):
			k[j]=0
			j=j-1
		if j<0:break 
		k[j]=k[j]+1

a=[	'q','w','e','r','t','y','u','i','o','p',
	'a','s','d','f','g','h','j','k','l','z',
	'x','c','v','b','n','m',]
n=6

f(a,n)