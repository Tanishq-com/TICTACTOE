import re
text = "The cat is on the mat."
pattern = r"\bcat\b"
match = re.search(pattern, text)
if match:
    print("Found 'cat' as a whole word!")
