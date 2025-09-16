a = int(input())
cont = 0
for i in range(1,a+1):
    s = str(i)
    cont += s.count('3')
    cont += s.count('6')
    cont += s.count('9')
print(cont)

