spam = 'Say hi\nto Bob\'s mother.'  # escape character for a single quote
print(spam)
print('Charlie' in spam)

spam = r'Say hi to\n Charlie\'s mother.'
print(spam)
print('Charlie' in spam)

# raw string "r" indicates to ignore all escape characters.

"""This is a test Python program.
I am learning string manipulation.
"""


def spam():
    """This is a multiline comment to help
    explain what the spam() function does."""
    print('Hello!')


spam()

name = 'Al'
age = 4000
print("My name is %s. I am %d years old." % (name, age))  # An alternative for formatted string

print('hello'.isalpha())  # isalpha() Returns True if the string consists only of letters and isn’t blank
print('hello123'.isalpha())
print('hello123'.isalnum())  # isalnum() Returns True if the string consists only of letters and numbers and is not blank
print('hello'.isalnum())
print('123'.isdecimal())  # isdecimal() Returns True if the string consists only of numeric characters and is not blank
print('    '.isspace())  # isspace() Returns True if the string consists only of spaces, tabs, and newlines and is not blank
print('This Is Title Case'.istitle())  # istitle() Returns True if the string consists only of words that begin with an uppercase letter followed by only lowercase letters
print('This Is Title Case 123'.istitle())
print('This Is not Title Case'.istitle())
print('This Is NOT Title Case Either'.istitle())

while True:
    print('Enter your age:')
    age = input()
    if age.isdecimal():
        break
    print('Please enter a number for your age.')

while True:
    print('Select a new password (letters and numbers only):')
    password = input()
    if password.isalnum():
        break
    print('Passwords can only have letters and numbers.')

print('Hello, world!1'.startswith('Hello'))
print('Hello, world!1'.endswith('!'))

print('Hello, world!'.partition('w'))  # split divides string into tuples wherever it sees the parameter but partition divides string into 3 tuples: before, parameter, before

print('Hello, World'.rjust(20))
print('Hello'.center(10, "="))

spam = 'SpamSpamBaconSpamEggsSpamSpam'
print(spam.strip('ampS'))  # strips whenever it sees a combination of a,m,p,S
