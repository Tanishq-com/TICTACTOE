inp = eval(input())

key = []
val = []
final = []

if len(inp) <=7:
    for i in inp:
        for j in i:
            if type(j) == str: 
                key.append(j)
            else:
                key.append(i[j])

            if type(i[j]) == int:
                val.append(i[j])
            else:
                val.append(j)

    remove = []

    for i in range(len(key)):
        temp = key[i]
        tempdic = {}
        flag = False

        for j in range(i+1,len(val)):
            if val[i] == val[j]:
                temp += key[j]
                remove.append(key[j])
                flag = True
            if key[i] == key[j]:
                final.append({key[i]: int(str(val[i]) + str(val[j]))})
                remove.append(key[i])

        if (temp not in remove):
            if flag == True:
                tempdic[temp] = int(val[i]**(1/3))


            else:
                tempdic[temp] = val[i]
            final.append(tempdic)

else:
    print("Members exceed the maximum limit")

print(final)
