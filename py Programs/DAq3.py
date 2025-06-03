l = eval(input())
prime = []
pal = False
for i in l:
    if (type(i) == int) and (i>1):
        for j in range(2,i):
            if i%j == 0:
                prime.append(False)
                break
        else:
            prime.append(True)
    elif type(i) == str:
        j = i.lower()
        if j == j[::-1]:
            pal = True
if (True in prime) and (pal == True):
    print(l[(len(l)//2)])
elif (True not in prime) and (pal == False):
    for i in range(len(l)):
        if type(l[i]) == str:
            l[i] = list(l[i])
    print(l)
elif True in prime:
    for i in l:
        if type(i) == str:
            l[l.index(i)] = i[::-1]
        elif type(i) == complex:
            l[l.index(i)] = complex(i.imag,i.real)
    print(l)
elif pal == True:
    for i in l:
        if type(i) == complex:
            l[l.index(i)] = i.conjugate()
        elif type(i) == int:
            l[l.index(i)] = -i
    print(l)
