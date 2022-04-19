import os

file = open("C:/Users/User/PycharmProjects/file.txt", "w")
file.write("Hello world. I am learning File Handling for today. Peace Out!!")
file.close()

file = open("C:/Users/User/PycharmProjects/file.txt", "r")
print(file.read())
file.close()

with open("C:/Users/User/PycharmProjects/file.txt", "r") as file:
    data = file.readlines()
    for line in data:
        word = line.split()
        print(word)

file = open("C:/Users/User/PycharmProjects/file.txt", "a")
print(file.truncate(8))  # This deletes all the rest of file content and leaves content till 8th.
