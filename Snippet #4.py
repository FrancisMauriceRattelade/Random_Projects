def adding():
    # Declaring variable list
    values = []
    num1 = input("You will enter a total of five numbers: ")
    num2 = input()
    num3 = input()
    num4 = input()
    num5 = input()
    values.append(num1)
    values.append(num2)
    values.append(num3)
    values.append(num4)
    values.append(num5)
    print(values)
    print(sum(num1 + num2 + num3 + num4 + num5))
    x = sum(values)
    print(x)


print(adding())
