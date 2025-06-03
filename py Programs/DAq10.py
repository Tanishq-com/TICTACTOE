line = input()
def length(i):    
    for j in range(i+1):
        check = line[j:l-i+j]
        if check == check[::-1]:
            print(check)
            return l-i
    else:
        return length(i+1)
    
if line.islower() and line.isalpha():
    l  = len(line)
    result = length(0)
    print(result)

else:
    print("Invalid Input")
