from turtle import left


s = list(input())
freqLetter = {}
freqDigit = {}
for i in s:
    if((i >= 'a' and i <= 'z') or (i >= 'A' and i <= 'Z')):
        if i in freqLetter:
            freqLetter[i] += 1
        else:
            freqLetter[i] = 1
    elif(i >= '0' and i <= '9'):
        if i in freqDigit:
            freqDigit[i] += 1
        else:
            freqDigit[i] = 1

letter, digit = 0, 0

for k, v in freqLetter.items():
    letter = max(letter, v)

for k, v in freqDigit.items():
    digit = max(digit, v)

ch = abs(letter-digit)
out = ''
for j in s:
    if j == s[ch]:
        if(j == ' '):
            out += '$'
        else:
            continue
    elif j == ' ':
        out += '$'
        # print('$')
    else:
        # print(j)
        out += j
print(out)
