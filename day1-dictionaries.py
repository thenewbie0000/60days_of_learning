myCat = {'size': 'fat', 'color': 'gray', 'disposition': 'loud'}

print(myCat['size'])

output = 'My cat has ' + myCat['color'] + ' fur.'
print(output)

# Difference between List and Dictionary
spam = ['cats', 'dogs', 'moose']
bacon = ['dogs', 'moose', 'cats']
print(spam == bacon)

eggs = {'name': 'Zophie', 'species': 'cat', 'age': '8'}
ham = {'species': 'cat', 'age': '8', 'name': 'Zophie'}
print(eggs == ham)

birthdays = {'Alice': 'Apr 1', 'Bob': 'Dec 12', 'Carol': 'Mar 4'}

while True:
    print('Enter a name: (blank to quit)')
    name = input()
    if name == '':
        break

    if name in birthdays:
        print(birthdays[name] + ' is the birthday of ' + name)
    else:
        print('I do not have birthday information for ' + name)
        print('What is their birthday?')
        bday1 = input()
        birthdays[name] = bday1
        print('Birthday database updated.')


spam = {'color': 'red', 'age': 42}
for v in spam.values():
    print(v)

for k in spam.keys():
    print(k)

for i in spam.items():
    print(i)

spam = {'name': 'Pooka', 'age': 5}
spam.setdefault('color', 'black')
print(spam)
spam.setdefault('color', 'white')
print(spam)
