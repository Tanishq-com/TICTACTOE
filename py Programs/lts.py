n=int(input("""Enter 1 to create a list : """))
if n==1:
    l=[]
    a=int(input('How many elements do you want in a list? : '))
    for i in range(1,a+1):
        b=int(input('Enter the number: '))
        l.append(b)
    print(l)
    i=int(input("""What you want to do next?
Enter 1 to add element
Enter 2 to delete element : """))
    if i==1:
        m=int(input('Enter the value to add: '))
        l.append(m)
        print(l)
    elif i==2:
        g=int(input('Enter the index you want to remove: '))
        del l[g]
        print(l)
    else:
        print('Enter correct input')
else:
    print('Enter correct input')
    


    
    
    
        
            
    
    
            
