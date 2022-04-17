def isPhoneNumber(text):
    if len(text) != 12:
        return False
    for k in range(0, 3):
        if not text[k].isdecimal():
            return False

    if text[3] != '-':
        return False
    for k in range(4, 7):
        if not text[k].isdecimal():
            return False
    if text[7] != '-':
        return False
    for k in range(8, 12):
        if not text[k].isdecimal():
            return False
    return True


print('Is 975-123-0000 a phone number?')
print(isPhoneNumber('975-123-0000'))
print('Is Moshi moshi a phone number?')
print(isPhoneNumber('Moshi moshi'))

message = 'Call me at 415-555-1011 tomorrow. 415-555-9999 is my office.'
for i in range(len(message)):
    chunk = message[i:i + 12]
    if isPhoneNumber(chunk):
        print('Phone number found: ' + chunk)
print('Done')

import re
phoneNumRegex = re.compile(r'(\d\d\d)-(\d\d\d-\d\d\d\d)')
mo = phoneNumRegex.search('My number is 415-555-4242.')
print('Phone number found: ' + mo.group())
print(mo.group(0))
print(mo.group(1))
# search() method searches the string it is passed for any matches to the regex. The search() method will return None
# if the regex pattern is not found in the string. If the pattern is found, the search() method returns a Match object,
# which have a group() method that will return the actual matched text from the searched string.
