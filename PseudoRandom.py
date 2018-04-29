import math

def expo(n,k,p):
    sum=0
    x=n**0.5
    i=1
    while i<=math.sqrt(n):
        if n%i==0:
            if n//i==1:
                sum=sum+pow(i%p,k,p)
            else:
                sum=sum+pow(i%p,k,p)+pow((n//i)%p,k,p)
        i=i+1    
    return sum%p               

inp=list(map(int,input().split()))
t=inp[0]
i=1
while i<=t:
    a=list(map(int,input().split()))
    n=a[0]
    k=a[1]
    p=a[2]
    sum=expo(n,k,p)
    print(math.floor(sum))
    i=i+1      
        