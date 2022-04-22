def else_case():
    print("Incorrect :(\n")
    print(score)
    print("\nTerminating Quiz....")
    quit()


print("\n\n\t\t\t\t\t\t\t\t\tWelcome to the QUIZ GAME!!\n")

playing = input("Do you want to start the quiz?\n")
if playing.upper() != "YES":
    print("Terminating Quiz....")
    quit()

elif playing.upper() == "YES":
    score = 0
    print("Let's play!!!")
    answer = input("What does CPU stand for?\n")
    if answer.upper() == "CENTRAL PROCESSING UNIT":
        score = score + 10
        print("Correct!\n+10")
    else:
        else_case()

    answer = input("Who is the prime minister of Nepal?\n")
    if answer.lower() == "sher bahadur deuba":
        score = score + 10
        print("Correct!\n+10")
    else:
        else_case()

    answer = input('Who is known as the "Light of Asia"?\n')
    if answer.upper() == "GAUTAM BUDDHA":
        score = score + 10
        print("Correct!\n+10")
    else:
        else_case()
