n = int(input())
rev_n = int(str(n)[::-1])

s= n+rev_n

while(s!=int(str(s)[::-1])):
    s = s+int(str(s)[::-1])

print(s)