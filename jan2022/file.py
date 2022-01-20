"""
so we start with python and do everything in it and then replicate on other four languages.
"""

"""
how does python work:
    you write code your commands in a file.py with predefined syntax
    of the language.
    to make those commands work on any machine,those syntax makers gave us a program,that
    takes our file as input and executes the instructions one by one on machine.
    apparently the program that they wrote has many versions.
    and standard one is written in python called Cpython interpretor.

    it starts from top and goes linearly from one instruction to another.

    internally python is converted to bytecode and then run on virtual machine.
    for c it is c byte code and for java it would be java byte code and you can run that 
    java virtual machine.

"""

# taking integer input
# n=int(input("enter a number : "))
# print(n)

# for i in range(n):
#     print(i)

# a,b=1,2
# print(a,b)

# print(type(a))
# print(type(b)==int)

# extensible => other programming languages can be used in python.
# import math
# print(math.sqrt(100))
# import random
# print(random.randint(0,1))

# for i in range(10):
#     print(random.randint(0,9),random.randint(0,9),random.randint(0,9),random.randint(0,9),sep='')


# # data types
# integer=10
# floating_point=3.33
# string="hello world"
# boolean=True
# complex_number=3+4j
# #these were five primitives

# print(id(integer),id(floating_point))
# #type() id() print() are in built functions.

# different number formats
# print(bin(4),hex(3),oct(7))
# print(bin(10)[2:])
# print(type(bin(10))) #it returns a string
# a=0b101 #0x for hexa and 0o for octal
# print(a) #here case insensitive
# #output always in decimal

# there is no range for ints.
# in python everything is an object,even ints and floats also
# print(bin(0o777))

# for floats only decimal format works.
# can use exponential form 1.2e3 ==== 1200.0
# c=3+4j
# print(c.real,c.imag) #output as floats

# boolean =False
# print(boolean)
# print(True+True)#2 and True is treated as 1 and false as 0 even gives zero division error
# multi_line="""
# there is only one
# lord of the rings
# """
# print(multi_line)
# can use \ in string to escape
# intbuilt types int,float,bool,str,complex

# slicing of strings
# string="there is only one lord of the rings"
# print(string[3],string[-1])
# #gives index out of range error.
# print(string[2:6])
# print(string[3:])
# print(string[:7])
# print(string[:])
# print(string[-5:-1]) #slicing might not give error,if error there you might not get anything in output.
# #begin value is less than end unless step is negative


# print(string[::-1])
# print(string[-1::-1])
# print(string*3)
# print(len(string))

# typecasting
# int() float() complex() bool() str()
# int(True) is one

# complex(3,4)
# bool of 0 and 0.0 or empty string is False  space is treated as True
# all buildin types are immutable,you cannot change them,have to create new object.
# to check two objects are same you can use is opeartor or use id function

# x is y returns true if both are object addresses in memory
# with builtin types you can assign to each other and changes won't reflect in each other like references

def is_prime(number: int) -> int:
    """
    Return 1 if number is prime, 0 for False and -1 for invalid input.

    arguments:
        number -- an integer greater than 1

    returns:
        1 if True 0 if False and -1 if invalid input.
    """

    if (not isinstance(number, int)) or number < 2:
        return -1
    prime = 1
    if number % 2 == 0 and number != 2:
        prime = 0
        return prime
    for i in range(3, int(number**0.5)+2, 2):
        if number % i == 0:
            prime = 0
            break
    return prime


for i in range(-11, 11):
    print(i, is_prime(i))
