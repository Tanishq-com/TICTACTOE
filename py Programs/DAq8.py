hair = input()
person = input()

if (hair.count("AGCT") == person.count("AGCT")) and (set(hair) == set(person) == {'A','G','C','T'}):
    print("MATCH")
else:
    print("MISMATCH")
