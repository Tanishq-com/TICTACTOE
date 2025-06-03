import re
pattern=r"[0-9]{2}+[A-Z]{3}+[0-9]{4}"
text = "Please contact us at 24BCT0257 for more information."
emails = re.findall(pattern, text)
print("Email addresses found:", emails)
