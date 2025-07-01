n = int(input())
a=[]
a = list(map(int, input().split()))
n1 = int(input())
count = 0
max =0
for i in range(n):
    if(count >= n1):
        break
    max=i
    for j in range(i+1,n):
        if j - i > n1 - count: 
            break
        if(count >= n1):
            break
        if a[max] < a[j]:
            max = j
    while max > i:
        a[max], a[max - 1] = a[max - 1], a[max]
        count += 1
        max -= 1
        if count == n1:
            break
        
        

for i in a:
    print(i,end=" ")
    


