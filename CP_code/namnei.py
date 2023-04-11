import math


def solve():
    A,h,n=[int(x) for x in input().split()]
    # h=int(input())
    # n=int(input())

    a=[int(x) for x in input().split()]
    b=[int(x) for x in input().split()]

    print(len(b))

    # exit()

    # for i in range(n):
    #     a[i]=int(input())
    
    # for i in range(n):
    #     b[i]=int(input())

    i=0

    while h>0 or i<n:

        numberOfFight=(math.ceil(float(b[i])/A))

        if math.ceil(float(h)/a[i]) < numberOfFight :
            break

        temp=numberOfFight*a[i]
        h-=temp
        i=i+1

    if i==n:
        print("YES")
    else :
        # //  cout<<"Health ->"<<h<<endl;
        print("NO")
    

t=int(input())

while t:
    solve()
    t=t-1


