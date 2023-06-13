""""
#if else

#print("write thr no.")
#var1 = 6
#var2 = 67


#var3 = int(input())

#if var3>var2:
 #   print("greater")
#elif var3==var2:

 #  print("Equal")
#else:
 #  print("lesser")


#list1=[4,5,6]
#print(15 not in list1)
#if 5 in list1:
 #    print("yes its in the list")
  #   print(list1)


#print("what is your age?")
#age=100
#age = int(input())


#if (age<18):
 #   print("you cannot drive")
#if (age==18):
 #   print("we will  think about it")
#if age>100:
 #   print("you cant drive")
#else:
 #   print("you can drive")


#finding dic
#D={'max':'rai','steve':'smith','king':'kholi'}
#name=input("enter the name:")
#print(D[name] )


#for loop change from list to tuple
#list1=[ ["max",1],["steve",2],["manish",4]]
#tuple1 = tuple(list1)
#print(tuple1)
#for name,lollypop in list1:
 #   print(name,"and chamling is",lollypop)
#list1=["int","float","max",12,1233,23]
#for item in list1:
 #   if str(item).isnumeric() and item>=1:
  #      print(item)
#for x in list1:
   #   print(x)
  #    if x==23:
 #        # break
    #     continue
#merge dict

def Merge(d1,d2):
   max={**d1,**d2}
   return max

d1={"a":1,"b":2}
d2={"c":3}
print(Merge(d1,d2))

#string join


#string join
steve=["max","is","good","boy"]
s=" ".join(steve)
print(s)

#maximum occurance in list
def most_frequent(List):
    return max(set(List), key=List.count)


List = [2, 1, 2, 2, 1, 3]
print(most_frequent(List))

#range into list
arr=set(range(1,12))
print(arr)

#list comparsion
list1=[2,3,4,5,3,4]
square=[i**2 for i in list1]
print(square)

#fff
adj = ["red", "big", "tasty"]
fruits = ["apple", "banana", "cherry"]

for x in adj:
  for y in fruits:
    print(x, y)


#while loop
#i=0
#while(i<=45):
 #   print(i,end=" ")
  #  if(i==34):
   #     break
    #i=i+2
#while loop
#j=0

#while(True):
 #   if j<5:
  #      j=j+1
   #     continue
    #print(j,end=" ")
    #if(j==44):
     #   break
 #   j=j+1

#while loop\

#while(True):
 #   inp=int(input("Enter thr number\n"))
  #  if inp>100:
   #     print("congrats you habe entered a number greater than 100\n")
    #    break
    #else:
     #   print("try again\n")
      #  continue



#calender
#import calendar

#print("The calender of year 2021 is : ",end=" \n")
#print(calendar.calendar(2021, 2),end="   ")

#print(calendar.month(2021, 2))


#faulty calculator

#print('Welcome to the calculator world!!')
#print('Please type the math operation you want to complete')
#print("+ for addition \n - for subraction \n * for multiplication \n / for division \n ** for power \n % for modulus")
#while(True):
 #   num1 = int(input('Enter the first number: '))
  #  num2 = int(input('Enter the second number: '))
   # operator = input('Which operator do you want to use?: ')

    #if operator == '+':
     #   if num1 == 56 and num2 == 9:
      #      print(77)
       # else:
        #    print(num1 + num2)
#
 #   if operator == '-':
  #      print(num1 - num2)

   # if operator == '*':
     #   if num1 == 45 and num2 == 3:
    #        print(555)
      #  else:
       #     print(num1 * num2)

    #if operator == '/':
     #   if num1 == 56 and num2 == 6:
      #      print(4)
       # else:
        #    print(num1 / num2)

    #if operator == '**':
     #   print(num1 ** num2)

    #if operator == '%':
     #   print(num1 % num2)

   # again = input(
    #    'Do you want to use Calculator again? \n Press y for yes and n for no: ')
    #if again == 'y':
    #    continue
    #else:
      #  print('See you again!')
     #   break


#operators in python
#a=3
#b=4
#c=a+b
#print(c)


#print(0-2)

#short hand if else notation

#a=int(input("enter a\n"))
#b=int(input("enter b\n"))
#if a>b:

 #   print("a is greater than b")

#else:
 #   print("b is greater")
#

#function
#def function(a,b):
 #   print("my name is max chamling",(a+b))

#function(5,7)
#
#def function(a,b):
 #   average = (a+b)/2
  #  return average

#v= function(3, 4)

# print("the average is:",v)


#def my_function(food):
 # for x in food:
  #  print(x,end=" ")

#fruits = ["apple", "banana", "cherry"]

#my_function(fruits)

def my_function(x):
    average=x+3
    print(average)

my_function(3)

def tri_recursion(k):
  if(k > 0):
    result = k + tri_recursion(k - 1)
    print(result)
  else:
    result = 0
  return result

print("\n\nRecursion Example Results")
tri_recursion(6)


#try and exception
num1=(input("enter the 1st number:"))
num2=(input("enter the 1nnd number:"))
sum=num1+num2

try:
     print(sum)

except Exception as e:
     print(e)

#print("this line is very importent")

#print("enter num1")
#num1=input()
#print("enter num2")
#num2=input()
#try:
 #   print("the sum of these two number:",int(num1)+int(num2))

#except Exception as e:
 #   print(e)

#print



#file IO BASICS
"R"-open file for reading-default mode
"w"-open a file for writing
"x"-create a file if not exit
"a"-add more coontent to a file
"t" -text mode-deafault mode
"b"-binary mode
"+"=read and write




"""
# f=open("max.txt","rt")
# print(f.readlines())
# print(f.readline())
# content = f.read()
# print(content)

# for item in f:
#
#   print(item,end="")

# f.close()
# print(f.read())

"""
print("welcome to the guess the number game ")
print("rules \n  guess the number within 9 attempts ")
print("choose a number from 1 to 15")
i=0
while i<9:

    guess=int(input("enter the number:::"))

    if guess==12:
        print("congrats you won!!!")
        print ("attempts",i+1)

        break
    if guess>11:
        print("wrong , the value is less than ",guess)
        print("attempts:",i+1,"     \nonly",9-(i+1),"attempts left")
        i = i + 1

    if guess < 13:
        print("wrong , the value is greater than ", guess)
        print("attempts:", i+1,"     \nonly",9-(i+1),"attempts left")
        i=i+1



#generate password
import random
import array

# maximum length of password needed
# this can be changed to suit your password length
MAX_LEN = 12

# declare arrays of the character that we need in out password
# Represented as chars to enable easy string concatenation
DIGITS = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
LOCASE_CHARACTERS = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
                     'i', 'j', 'k', 'm', 'n', 'o', 'p', 'q',
                     'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
                     'z']

UPCASE_CHARACTERS = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
                     'I', 'J', 'K', 'M', 'N', 'O', 'p', 'Q',
                     'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y',
                     'Z']

SYMBOLS = ['@', '#', '$', '%', '=', ':', '?', '.', '/', '|', '~', '>',
           '*', '(', ')', '<']

# combines all the character arrays above to form one array
COMBINED_LIST = DIGITS + UPCASE_CHARACTERS + LOCASE_CHARACTERS + SYMBOLS

# randomly select at least one character from each character set above
rand_digit = random.choice(DIGITS)
rand_upper = random.choice(UPCASE_CHARACTERS)
rand_lower = random.choice(LOCASE_CHARACTERS)
rand_symbol = random.choice(SYMBOLS)

# combine the character randomly selected above
# at this stage, the password contains only 4 characters but
# we want a 12-character password
temp_pass = rand_digit + rand_upper + rand_lower + rand_symbol

# now that we are sure we have at least one character from each
# set of characters, we fill the rest of
# the password length by selecting randomly from the combined
# list of character above.
for x in range(MAX_LEN - 4):
    temp_pass = temp_pass + random.choice(COMBINED_LIST)

    # convert temporary password into array and shuffle to
    # prevent it from having a consistent pattern
    # where the beginning of the password is predictable
    temp_pass_list = array.array('u', temp_pass)
    random.shuffle(temp_pass_list)

# traverse the temporary password array and append the chars
# to form the password
password = ""
for x in temp_pass_list:
    password = password + x

# print out password
print(password)  

"""

# writing and appending
# f=open("max chamling.txt","w")
# f=open("max chamling.txt","a")
# a=f.write("max rai is a good boy\n")
# f.write("steve smith is a world classic bartsman")
# print(a)

# f.close()

# handle read and write both
# f=open("max.txt","r+")
# print(f.read())
# f.write("thank you")


# seek() tell() on python file
# R = open("max chamling.txt")
# print(R.tell())
# print(R.readline())
# print(R.tell())
# print(R.readline())
# print(R.tell())
# print(R.readline())
# R.seek(0)
# print(R.readline())
# R.seek(0)
# print(R.readline())

# using block to open python file
# with open ("max chamling.txt") as f:
#   a=f.readline()

#  print(a)
# a = f.readline()
# print(a)
"""

import datetime

def getdate():
    return datetime.datetime.now()

def add_func(client):
    if client == "1":
        exer_diet = input("Enter number 1 for exercise or 2 for diet : ")
        add_item = input("What do you want to Add? : ")
        if exer_diet == "1":
            with open("harry_exer.txt","a") as f:
                add = [" [",getdate(),"] ",add_item,"\n"]
                for item in add:
                    f.write("%s" % item)
            print("Item successfully added")
        elif exer_diet == "2":
            with open("harry_diet.txt","a") as f:
                add = [" [",getdate(),"] ",add_item,"\n"]
                for item in add:
                    f.write("%s" % item)
            print("Item successfully added")
    elif client == "2":
        exer_diet = input("Enter number 1 for exercise or 2 for diet : ")
        add_item = input("What do you want to Add? : ")
        if exer_diet == "1":
            with open("rohan_exer.txt","a") as f:
                add = [" [",getdate(),"] ",add_item,"\n"]
                for item in add:
                    f.write("%s" % item)
            print("Item successfully added")
        elif exer_diet == "2":
            with open("rohan_diet.txt","a") as f:
                add = [" [",getdate(),"] ",add_item,"\n"]
                for item in add:
                    f.write("%s" % item)
            print("Item successfully added")
    elif client == "3":
        exer_diet = input("Enter number 1 for exercise or 2 for diet : ")
        add_item = input("What do you want to Add? : ")
        if exer_diet == "1":
            with open("hammad_exer.txt","a") as f:
                add = [" [",getdate(),"] ",add_item,"\n"]
                for item in add:
                    f.write("%s" % item)
            print("Item successfully added")
        elif exer_diet == "2":
            with open("hammad_diet.txt","a") as f:
                add = [" [",getdate(),"] ",add_item,"\n"]
                for item in add:
                    f.write("%s" % item)
            print("Item successfully added")
def retrive_func(client):
    if client == "1":
        exer_diet = input("Enter number 1 for exercise or 2 for diet : ")
        if exer_diet == "1":
            try:
                with open("harry_exer.txt","r") as f:
                    print("\nFile items\n")
                    for i in (f.readlines()):
                        print(i)
            except:
                print("Items does not retrieve. Please add some items in file")
        elif exer_diet == "2":
            try:
                with open("harry_diet.txt","r") as f:
                    print("\nFile items\n")
                    for i in (f.readlines()):
                        print(i)
            except:
                print("Items does not retrieve. Please add some items in file")
    elif client == "2":
        exer_diet = input("Enter number 1 for exercise or 2 for diet : ")
        if exer_diet == "1":
            try:
                with open("rohan_exer.txt","r") as f:
                    print("\nFile items\n")
                    for i in (f.readlines()):
                        print(i)
            except:
                print("Items does not retrieve. Please add some items in file")
        elif exer_diet == "2":
            try:
                with open("rohan_diet.txt","r") as f:
                    print("\nFile items\n")
                    for i in (f.readlines()):
                        print(i)
            except:
                print("Items does not retrieve. Please add some items in file")
    elif client == "3":
        exer_diet = input("Enter number 1 for exercise or 2 for diet : ")
        if exer_diet == "1":
            try:
                with open("hammad_exer.txt","r") as f:
                    print("\nFile items\n")
                    for i in (f.readlines()):
                        print(i)
            except:
                print("Items does not retrieve. Please add some items in file")
        elif exer_diet == "2":
            try:
                with open("hammad_diet.txt","r") as f:
                    print("\nFile items\n")
                    for i in (f.readlines()):
                        print(i)
            except:
                print("Items does not retrieve. Please add some items in file")

client = input("Enter number 1 for harry, 2 for rohan and 3 for hammad : ")
add_retrieve = input("Enter number 1 for Add and 2 for Retrieve : ")

if add_retrieve == "1":
    add_func(client)
elif add_retrieve == "2":
    retrive_func(client)

"""

# scope,global variable,global keyword
# l=10#global variable
# def function(n):
# l=5
# l=l+5
#   global l
#  l=l+30
# m=10
# t=l+m
# print(t,m)

#    print(n,"i am a good listener")

# function("my name is max chamling")
"""
x=56
def  max(n):
    x=20
    def chamling():
        global x
        x=456+n
    #print("before calling chamling()",x)
    chamling()
    print("after calling chamling()",x)

max(456)
#print(x)
"""


##recursion :recursive vs iterative approach
# def function(str1):
#   function(str1)
# print("this is"+str1)

# function("max chamling")
"""
def tri_recursion(k):
  if(k>0):
    result = k+tri_recursion(k-1)
    print(result)
  else:
    result = 0
  return result

print("\n\nRecursion Example Results")
tri_recursion(6)



def recursive_factorial(n):
    if n == 1:
        return n
    else:
        return n * recursive_factorial(n - 1)

    # user input


num = 6

# check if the input is valid or not
if num < 0:
    print("Invalid input ! Please enter a positive number.")
elif num == 0:
    print("Factorial of number 0 is 1")
else:
    print("Factorial of number", num, "=", recursive_factorial(num)) 
"""
##def factorial(n):
  #  fac=1
   # for i in range(n):
    #    fac = fac*(i+1)
    #return fac


#number=int(input("enter the number"))
#print(factorial(number))
rows = int(input('Enter the number of rows you want for the stairs : '))

stairs = bool(int(input("Enter 1 of regular stairs and 0 for inverted stairs : ")))

if stairs:
    for i in range(1, rows + 1):
        print('* ' * i)
elif not stairs:
    for i in range(rows, 0, -1):
        print('* ' * i)