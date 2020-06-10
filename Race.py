# Imports different modules tobe used in the program
import turtle
import random
import time

# Sets up turtles and screen
wn = turtle.Screen()
wn.bgcolor("white")

fline = turtle.Turtle()
fline.up()
fline.hideturtle()
fline.color("black")
fline.goto(150, 300)
fline.right(90)
fline.pendown()
fline.pensize(5)
fline.forward(600)
player1 = turtle.Turtle()
player1.color("lightblue")
player1.shape("turtle")

player1.up()
player1.goto(0, 150)
player1.showturtle()

player2 = turtle.Turtle()
player2.shape("circle")
player2.color("red")

player2.up()
player2.goto(0, 80)
player2.showturtle()

player3 = turtle.Turtle()
player3.color("green")
player3.shape("square")

player3.up()
player3.goto(0, 15)
player3.showturtle()


# Hides turtles and clears drawn finish line
def hide():
    player1.hideturtle()
    player2.hideturtle()
    player3.hideturtle()
    fline.clear()


# Shows turtles
def show():
    player1.showturtle()
    player2.showturtle()
    player3.showturtle()


# Resets  screen back to beginning
def reset():
    hide()
    player1.goto(0, 150)
    player2.goto(0, 80)
    player3.goto(0, 15)
    fline.goto(150, 300)
    fline.forward(600)
    app()
    show()


# Prints win message
def winmessage():
    print('\n'"Congrats! You won the game!")


# handles replay of the game
def replay():
    time.sleep(.5)
    hide()
    again = str(input("Do you want to play again, type yes or no: ").lower().strip())
    if again == 'yes':
        reset()
    elif again == "no":
        print('\n'"Have a beautiful day!")
        exit()
    elif again != 'yes' or 'no':
        replay()


# Checks to see if someone won
def both():
    if player1.xcor() >= 150:
        winmessage()
        replay()
    if player2.xcor() >= 150:
        winmessage()
        replay()
    if player3.xcor() >= 150:
        winmessage()
        replay()


# Questions. Selects turtles turn. (Inputs)
def question1():
    active_player = (random.randint(1, 10) % 3 + 1)

    print("Player " + str(active_player) + ": What is the square root of 49?" '\n')
    q1 = input("Answer: ")

    if q1 == 7:
        print('\n'"Correct! Nice work")
        List.remove(question1)
        if active_player == 1:
            player1.forward(50)
            both()
        if active_player == 2:
            player2.forward(50)
            both()
        if active_player == 3:
            player3.forward(50)
            both()

    elif q1 != 7:
        print('\n'"Sorry, that is wrong. The correct answer was 7.")


def question2():
    active_player = (random.randint(1, 10) % 3 + 1)

    print("Player " + str(active_player) + ": What is the square root of 64?" '\n')
    q1 = int(input("Answer: "))

    if q1 == 8:
        print('\n'"Correct! Nice work")
        List.remove(question2)
        if active_player == 1:
            player1.forward(50)
            both()
        if active_player == 2:
            player2.forward(50)
            both()
        if active_player == 3:
            player3.forward(50)
            both()

    elif q1 != 8:

        print('\n'"Sorry, that is wrong. The correct answer was 8.")


def question3():
    active_player = (random.randint(1, 10) % 3 + 1)

    print("Player " + str(active_player) + ": What is the square root of 81?" '\n')
    q1 = int(input("Answer: "))

    if q1 == 9:
        print('\n'"Correct! Nice work")
        List.remove(question3)
        if active_player == 1:
            player1.forward(50)
            both()
        if active_player == 2:
            player2.forward(50)
            both()
        if active_player == 3:
            player3.forward(50)
            both()

    elif q1 != 9:
        print('\n'"Sorry, that is wrong. The correct answer was 9.")


def question4():
    active_player = (random.randint(1, 10) % 3 + 1)

    print("Player " + str(active_player) + ": What is the square root of 144?" '\n')
    q1 = int(input("Answer: "))

    if q1 == 12:
        print('\n'"Correct! Nice work")
        List.remove(question4)
        if active_player == 1:
            player1.forward(50)
            both()
        if active_player == 2:
            player2.forward(50)
            both()
        if active_player == 3:
            player3.forward(50)
            both()

    elif q1 != 12:
        print('\n'"Sorry, that is wrong. The correct answer was 12.")


def question5():
    active_player = (random.randint(1, 10) % 3 + 1)

    print("Player " + str(active_player) + ": What is the square root of 100?" '\n')
    q1 = int(input("Answer: "))

    if q1 == 10:
        print('\n'"Correct! Nice work")
        List.remove(question5)
        if active_player == 1:
            player1.forward(50)
            both()
        if active_player == 2:
            player2.forward(50)
            both()
        if active_player == 3:
            player3.forward(50)
            both()

    elif q1 != 10:
        print('\n'"Sorry, that is wrong. The correct answer was 10.")


def question6():
    active_player = (random.randint(1, 10) % 3 + 1)

    print("Player " + str(active_player) + ": What is the square root of 16?" '\n')
    q1 = int(input("Answer: "))

    if q1 == 4:
        print('\n'"Correct! Nice work")
        List.remove(question6)
        if active_player == 1:
            player1.forward(50)
            both()
        if active_player == 2:
            player2.forward(50)
            both()
        if active_player == 3:
            player3.forward(50)
            both()

    elif q1 != 4:
        print('\n'"Sorry, that is wrong. The correct answer was 4.")


def question7():
    active_player = (random.randint(1, 10) % 3 + 1)

    print("Player " + str(active_player) + ": What is the square root of 36?" '\n')
    q1 = int(input("Answer: "))

    if q1 == 6:
        print('\n'"Correct! Nice work")
        List.remove(question7)
        if active_player == 1:
            player1.forward(50)
            both()
        if active_player == 2:
            player2.forward(50)
            both()
        if active_player == 3:
            player3.forward(50)
            both()

    elif q1 != 6:
        print('\n'"Sorry, that is wrong. The correct answer was 6.")


def question8():
    active_player = (random.randint(1, 10) % 3 + 1)

    print("Player " + str(active_player) + ": What is the square root of 625?" '\n')
    q1 = int(input("Answer: "))

    if q1 == 25:
        print('\n'"Correct! Nice work")
        List.remove(question8)
        if active_player == 1:
            player1.forward(50)
            both()
        if active_player == 2:
            player2.forward(50)
            both()
        if active_player == 3:
            player3.forward(50)
            both()

    elif q1 != 25:
        print('\n'"Sorry, that is wrong. The correct answer is 25.")


# List containing all  question functions
List = [question1, question2, question3, question4, question5, question6, question7, question8]


# Wipes list then appends all question functions to the list
def app():
    List.clear()
    List.append(question1)
    List.append(question2)
    List.append(question3)
    List.append(question4)
    List.append(question5)
    List.append(question6)
    List.append(question7)
    List.append(question8)


# loop to run questions at random
play = True
while play:
    random.choice(List)()
# closes game screen (window) on click
wn.exitonclick()
