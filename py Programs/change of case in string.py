def mutate_string(string, position, character):
    a=list(string)
    a[position]=character
    b="".join(a)
    return b

s=input()
p=int(input())
c=input()
print(mutate_string(s,p,c))
    
        
