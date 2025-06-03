def count_substring(string, sub_string):
    a=string.count(sub_string)  
    return a   

s=input()
sub=input()
print(count_substring(s,sub))
