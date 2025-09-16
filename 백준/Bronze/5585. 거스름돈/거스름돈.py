n1 = int(input())
sum = 0
n = 1000- n1
while(1):
    if n >= 500:
        n -= 500;
    elif(n >=100):
        n-=100
    elif(n >= 50):
        n-=50
    elif(n >= 10):
        n-=10
    elif(n>= 5):
        n-=5
    elif(n >= 1):
        n-=1
    
    sum+=1
    if(n == 0):
        break

print(sum)
