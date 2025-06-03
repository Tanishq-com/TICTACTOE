list = eval(input())
type_list = type(list)

counter = 0
flag = False
for i in list:
    if type(i) == type_list:
        flag = True
        counter += len(i)-1
    counter += 1

if flag:
    print(counter)
else:
    print("cannnot unpack")
