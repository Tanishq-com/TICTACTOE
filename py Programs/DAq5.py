temp = 1
num = {}

def sum_digit(num):
    while num//10 != 0:
        s=0
        while num!=0:
            s += num%10
            num //= 10
        num = s
    return num

for i in range(ord("A"),ord("Z")+1):
    if temp == 10:
        temp = 1
    num[chr(i)] = temp
    temp+=1

word = input()
destiny=soul=dream=0
for i in word:
    destiny += num[i]
    if i in "AEIOU":
        soul += num[i]
    else:
        dream += num[i]

destiny = sum_digit(destiny)
soul = sum_digit(soul)
dream = sum_digit(dream)

print(destiny)
print(soul)
print(dream)
