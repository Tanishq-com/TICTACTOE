import re
pattern="^[A-Z]{5}+[0-9]{4}+[A-Z]{1}$"
pan=input()
if (re.match(pattern,pan)):
    print('valid')
else:
    print('invalid')
