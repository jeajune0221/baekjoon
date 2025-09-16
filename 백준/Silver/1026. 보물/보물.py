n = int(input())
alist = list(map(int,input().split()))
blist = list(map(int,input().split()))
alist.sort()
alist.reverse()
blist.sort()
sum = 0
for i in range(0,n):
    sum+=(alist[i] * blist[i])
print(sum)