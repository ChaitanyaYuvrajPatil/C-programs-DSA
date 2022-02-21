import re
s = input()

se = re.findall('\d+',s)
sum =0
for i in se:
    sum+=int(i)

print(sum)
