import random

user_wins = 0
computer_wins = 0
options = ["ROCK", "PAPER", "SCISSORS"]

while True:
    user_input = input("ROCK/PAPER/SCISSORS or 'Q' to quit\n").upper()
    if user_input == 'Q':
        break

    if user_input not in options:
        print("Don't be over smart!!\n")
        continue

    random_number = random.randint(0, 2)
    # 0 = ROCK
    # 1 = PAPER
    # 2 = SCISSORS
    computer_pick = options[random_number]
    print("Computer Pick :", computer_pick)

    if user_input == "ROCK" and computer_pick == "SCISSORS":
        print("You won!")
        user_wins += 1

    elif user_input == "PAPER" and computer_pick == "ROCK":
        print("You won!")
        user_wins += 1

    elif user_input == "SCISSORS" and computer_pick == "PAPER":
        print("You won!")
        user_wins += 1

    else:
        print("I won!!\n")
        computer_wins += 1


print("Final score:")
print("User: ", user_wins)
print("Computer: ", computer_wins)
print("Come Again!!")
