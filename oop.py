
class UserFetcher:
    def fetchUserData(self):
        raise NotImplementedError("Subclasses must implement fetchUserData")


class fetchUserData(UserFetcher):
    __data = {1:"John", 2:"Tony", 3:"Fletchers"}
    def returnData(self):
        return self.__data
    
    def editData(self, userID, name):
        self.__data[userID] = name


class Person():
    def __init__(self, name, age):
        """
        1. Encapsulation
            Make data private 
        """
        self.__name = name
        self.__age = age

    def displayAgeName(self):
        return (self.__age, self.__name)
        
"""
2. Inheritance
    Inherit other classes
"""
class Admin(Person):
    __data = {}
    def __init__(self, name, age, rank):
        super().__init__(name, age)
        self.__rank = rank


    def getUserInfo(self):
        """
        3. Abstraction
            Hide complexity through functions
        """
        self.__data = fetchUserData().returnData()
        return self.__data
    
    def displayRank(self):
        return self.__rank
    
    

Anthony = Person("Anthony", 20)
print(Anthony.displayAgeName())

Francisco = Admin("Tony", 20, "Admin")
print(Francisco.displayAgeName())
print(Francisco.displayRank())
print(Francisco.getUserInfo())
Francisco.