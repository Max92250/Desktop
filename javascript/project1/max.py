#max chamling
"""
this is A MULTI LINE COMMENT
"""
print("my name is max chamling",end=".")
print("i live in nepal \f", "i am a boss" ,end=" ok.")
print("now you now")
print("c:\\narry")
print("c:\max chamling")
print("\v max is  good boy")
print("My mobile number ","is 7\a8\a7\a3\a9\a2\a3\a4\a0\a8\a");
print("\' hello world")
print("\"hello world")
#fruits = ("apple", "banana", "cherry")
#x, y, z = fruits

#print(x)
#print(y)
#print(z)



def myfunc():
    global x
    x = "steve smith"

    print(x)


myfunc()
print("Python is " + x)

# initializing list
lis = [2, 1, 3, 5, 4, 3, 8]

# using del to delete elements from pos. 2 to 5
# deletes 3,5,4
del lis[0:3]

# displaying list after deleting
print("List elements after deleting are : ", end="")
for i in range(0, len(lis)):
    print(lis[i], end=" ")

print("\r")



fruits = ["apple","banana","max chamling"]
fruits[0]="steve smith"
fruits.append("kingkong")
fruits.insert(1,"ambani")
fruits.remove("banana")
print(fruits)
print(fruits[-1])
print(fruits[2:4])
print(len(fruits))


#tuple

max=("steve smith","aston agar","mitchell starc")


print(len(max))
print(max[0])

a=1
b=2
a,b=b,a
print(a,b)

#dic
car =	{
  "brand": "Ford",
  "model": "Mustang",
  "year": 1964

}

car["year"]=2020
car["color"]="blue"
car.pop("brand")
del car["model"]
d3=car.copy()
del d3["year"]
print(car)


print(
car.get("model")
)
print(car)

#set

steve={"max ","king","lol"}
more_steve=[123,"steve","jij"]
steve.add("jok")
steve.remove("lol")
print(more_steve)
print(steve)


#str
fig="harry is a good boy"
print(len(fig))
print(fig[0:6:3])
print(fig[::])
print(fig[:13])
print(fig[::3])
print(fig[-4:])
print(fig[-4:-1])
print(fig[::-1])
print(fig[::-2])
print(fig.isalnum())
print(fig.endswith("boy"))
print(fig.count("o"))
print(fig.capitalize())
print(fig.find("good"))
print(fig.lower())
print(fig.replace("harry","max chamling"))
print(fig.upper())
print(fig.isprintable())

#list


number = [12,45,34,23]
number.sort()
print(number)
number.reverse()
print(number)
print(number[1:])
print(number[1:3])
print(number[::])
print(number[::3])
print(number[::-1])
print(number[::-2])
print(number[1:5:3])
print(min(number))

#ert
s=[1,2,0]
a,b,c=s[::-1]
print(s[a])

#dic
fog={"max":"king","kan":"lop"}
#d3=fog.copy()
#del d3["max"]
#rint(fog)
fog.update({"selena":"gomez"})
print(fog)
print(fog.items())








