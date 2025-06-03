import re
pattern=r"[A-Za-z0-9]+[@]+[A-Za-z0-9]+[.]+[a-z]*"
text = "Please contact us at support@example.com or sales@example.org for more information."
emails = re.findall(pattern, text)
print("Email addresses found:", emails)
