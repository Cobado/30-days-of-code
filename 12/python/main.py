class Person:
	def __init__(self, firstName, lastName, idNumber):
		self.firstName = firstName
		self.lastName = lastName
		self.idNumber = idNumber
	def printPerson(self):
		print("Name:", self.lastName + ",", self.firstName)
		print("ID:", self.idNumber)

class Student(Person):
    #   Class Constructor
    #   
    #   Parameters:
    #   firstName - A string denoting the Person's first name.
    #   lastName - A string denoting the Person's last name.
    #   id - An integer denoting the Person's ID number.
    #   scores - An array of integers denoting the Person's test scores.
    #
    # Write your constructor here
    def __init__(self, first, last, idNum, scores):
        self.scores = scores
        super().__init__(first, last, idNum)
        

    #   Function Name: calculate
    #   Return: A character denoting the grade.
    #
    # Write your function here
    def calculate(self):
        avg = 0
        mark = ''
        if (len(self.scores) > 0):
            for i in range(len(self.scores)):
                avg += self.scores[i]
        
        avg = avg // len(self.scores)
        
        if (avg < 40):
            mark = 'T'
        elif (avg <= 40 or avg < 55):
            mark = 'D'
        elif (avg <= 55 or avg < 70):
            mark = 'P'
        elif (avg <= 70 or avg < 80):
            mark = 'A'
        elif (avg <= 80 or avg < 90):
            mark = 'E'
        elif (avg <= 90 or avg <= 100):
            mark = 'O'
        else:
            mark = ''
            
        return mark

line = input().split()
