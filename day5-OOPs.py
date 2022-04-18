print("Create your account\n")
new_username = input("Enter new username: ")
while True:
    new_password = input("Enter your new password: ")
    confirmation_password = input("Enter your confirmation password: ")

    if new_password == confirmation_password:
        print("New account creation successful!!\n")
        break

    print("Passwords don't match.\n Try Again!!\n")

print("Login Section:\n")
user_input_name = input("Username: ")
user_input_pass = input("Password: ")
if user_input_name == new_username and new_password == user_input_pass:
    print("Login Successful!!\n")
if user_input_name != new_username:
    print("Incorrect Username")
if user_input_pass != new_password:
    print("Incorrect Password")


class Person:
    def __init__(self, name):
        self.name = name

    def talk(self):
        print(f"Arey yeh {self.name} toh zinda hai")


Mamaji = Person("GhungruSeth")
Mamaji.talk()


class Mob:
    def __init__(self, company, cost, RAM, year):
        self.company = company
        self.cost = cost
        self.RAM = RAM
        self.year = year

    def run(self):
        print("This is my Phone.")
        print("It's a", self.company, "phone.")
        print("It costed me", self.cost)
        print("It has", self.RAM, "gB RAM.")
        print("It was launched in", self.year)


iPhone = Mob("Apple", '1000$', 8, 2012)
iPhone.run()


class Mob:  # Base(Parent)Class
    def __init__(self, cost, RAM):
        self.cost = cost
        self.RAM = RAM

    def show_details(self):
        print(f"This is my Phone.It costed me {self.cost}")
        print(f"It has {self.RAM}gB RAM.\n")


class Oppo(Mob):  # Child Class
    def __init__(self, cost, RAM, year, ROM):
        super().__init__(cost, RAM)
        self.year = year
        self.ROM = ROM

    def show_mob_details(self):
        print("I am a Oppo Phone.")
        print("I was launched in", self.year)
        print("I have", self.ROM, "gB ROM")


m1 = Oppo('500$', 10, 2016, 64)
m1.show_details()
m1.show_mob_details()
