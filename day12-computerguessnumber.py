print("\t\t\t\t\tWelcome to the GAME!!")
print("Let me know the range of the numbers in between which you want me to guess:")
a = int(input())
b = int(input())
lst = []
n = a
for i in range(n, b + 1):
    first = n
    lst.append(first)
    n += 1
length = len(lst)

answer1 = input("Have you thought a number?(yes/no)\n")
if answer1.lower() == 'no':
    quit()

elif answer1.lower() == 'yes':
    while True:
        m = (a + b) / 2
        m = int(m)
        answer2 = input(f'Is it {m}?(yes/higher/lower)\n')
        if answer2.lower() == 'yes':
            print("Yayyyyyyyyy!!! I did it\n")
            exit()

        elif answer2.lower() == 'higher':
            a = m

        elif answer2.lower() == 'lower':
            b = m
