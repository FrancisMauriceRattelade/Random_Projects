# Defining question variable to be used in functions
question = "Do you want to play again?"

def Snippet4(question):
    # creates list
    lst = []
    # defines how many inputs there will be
    num = int(5)
    print("Enter a total of 5 numbers: ")
    # adds numbers of all inputs to the defined list
    for n in range(num):
        numbers = int(input())
        lst.append(numbers)
        # prints the sum of all inputs
    print("Sum of elements in given list is: ", sum(lst))
    # boolean input asking to continue or end program
    reply = str(input(question + ' (y/n): ')).lower().strip()
    if reply[0] == 'n':
        return False
    if reply[0] == 'y':
        return True

# boolean if input is true it loops Snippet4, if false it exits the code
while Snippet4(question):
    if not Snippet4(question):
        exit()
