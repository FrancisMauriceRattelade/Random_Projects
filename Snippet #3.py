   # Creating the list that we will be manipulating.
List = [3, 4, 5, 6, 8, 10, 1000, 10000]
# Printing out the list that we just created above.
print(List)
# This reverses the list that we had just created.
List.reverse()
# This will print out the now reversed list that we had created.
print(List)
# We are using a for loop to give a variable to each number in the list.
for num in List:
    # Then using the modulus "%" operator to check if divided by 2 that the remainder number will be 0.
    if num % 2 == 0:
        # After checking the remainder we then print out the new list that only includes even numbers aka the numbers that are when divided by 2 have a remainder of 0.
        print(num, end=" ")
