import math

print(
    """Welcome to the Cool Calculator program!
    1. Addition
    2. Subtraction
    3. Multiplication
    4. Division
    5. Exponentiation
    6. Sine
    7. Cosine
    8. Tangent
    9. Floor
    10. Ceiling
    11. Round
    12. Absolute value
Enter your choice:"""
)

choice = int(input())

if choice == 1:
    print("Enter the numbers you'd like to add: ")
    a = int(input())
    b = int(input())
    result = a + b

    print("The sum is", result)

if choice == 2:
    print("Enter the numbers you'd like to subtract: ")
    a = int(input())
    b = int(input())
    result = a - b

    print("The difference is", result)

if choice == 3:
    print("Enter the numbers you'd like to multiply: ")
    a = int(input())
    b = int(input())
    result = a * b

    print("The sum is", result)

if choice == 4:
    print("Enter the numbers you'd like to divide: ")
    a = int(input())
    b = int(input())
    result = a / b

    print("The quotient is", result)

#Karishma R S