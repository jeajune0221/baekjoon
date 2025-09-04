from collections import deque

visted = [0] * 200001
n,m = map(int,input().split())
dequ = deque()
dequ.appendleft((n,0))
visted[n] = 1
total = n
if(n == m):
    print(0)
    
else:
    while dequ:
        n1,t = dequ.popleft()
        if n1* 2 == m:
            print(t)
            break
        elif n1+1 == m or n1-1 == m:
            print(t+1)
            break
        if 0 <= n1*2 <= 100000 and not visted[n1*2]:
            dequ.appendleft((n1*2,t))
            visted[n1*2] = 1
        if(0 <= n1-1 <= 100000 and not visted[n1-1]):
            dequ.append((n1-1,t+1))
            visted[n1-1] = 1
        if(0 <= n1+1 <= 100000 and not visted[n1+1]):
            dequ.append((n1+1,t+1))
            visted[n1+1] = 1
        
