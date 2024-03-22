

def factorial_recursive(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial_recursive(n - 1)

num =int(input("Enter any number: "))
print(f"The factorial of {num} is {factorial_recursive(num)}")
