import random

top_of_range = input("Enter upper range:\n")
if top_of_range.isdigit():
    top_of_range = int(top_of_range)
    if top_of_range < 0:
        print("Please type a number greater than 0 next time.")
        quit()

else:
    print("Please type a number next time.")
    quit()

r = random.randint(0, top_of_range)
guess = 0

while True:
    guess += 1
    user_guess = input("Make a guess:\n")
    if user_guess.isdigit():
        user_guess = int(user_guess)
    else:
        print("Please type a number next time.")
        continue

    if user_guess == r:
        print("You got it!!")
        break
    elif user_guess > r:
        print("You were above the number.\n")
    else:
        print("You were below the number.\n")

print(f"You got it in {guess} guesses.")
