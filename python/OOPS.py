class  Dog:
    def __init__(self,name,breed,owner):
        self.name = name
        self.breed = breed
        self.owner = owner
    def  bark(self):
        print("Woof!")

class Owner:
    def __init__(self,name,address,number):
        self.name = name
        self.address=address
        self.number = number
class Person:
    def __init__(self,name,age,email):
        self.name = name
        self.age = age
        self._email=email
    def greet(self):
        print(f"Hello, my name is {self.name} and I am {self.age} years old.")
    def hello_to_you(self,other_person):
        print(f"Hello {other_person.name}, nice to meet you!")
    # getter
    @property
    def email(self):
        print("accessing email...")
        return self._email
    # setter
    @email.setter
    def email(self,new_email):
        print("updating email...")
        self._email = new_email


person2=Person("Alice",25,"alice@gmail.com")
person1 = Person("Rahul",30,"rahul@gmail.com")
print(person1.email)  # Output: accessing email...
person1.email = "p1@gmail.com"
person1.greet()
person1.hello_to_you(person2)
owner1=Owner("John Doe","123 Main St","555-1234")
dog1=Dog("Buddy","Golden Retriever",owner1)
print(dog1.owner.name)  # Output: John Doe