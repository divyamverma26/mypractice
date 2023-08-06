print('How are you!!!!')
#This is a comment
#interpreter will ignore this
'''This is a multiline comment.'''
"""a=20
print(a)
a=30
print(a)
print(type(a))
b=5.2
print(b)
print(type(b))
c=a+b
print(c)
print('agr apke variable ki pehle kuch or value thi or bdme koi nayi value di hai to hmesha bd waali hi consider hoti hai')
print(type(c))
d=a*c
print(d)
print('hello'*3)
print('hello\n'*5)
#to print in new line
print('yellow', 'red', 'blue')
#to insert breakes
print('hello,','how are you')
#to insert a comma
print('"I love python"')
print('\"I love python\"')
#to enclose in double quotes
name, roll_number, section = "Divyam Verma", 54, "KS"
#this is multiple assignment
val1 = val2 = val3 = 24.5
#this is chained assignment.
name = input("enter your name")
print("My name is", name)
age = int(input("enter your age"))
print("age is", age)
new = age *2
print(new)"""
"""n = int(input())
for i in range(0, n):
    for j in range(0, i+1):
        print(i+1, end="  ")
    print()
a = int(input())
for x in range(0, a):
    for y in range(0, x+1):
        print(y+1, end="  ")
    print()
n = int(input())
for i in range(n,0,-1):
    for j in range(0, i):
        print("*", end="  ")
    print()
def fact(n):
    if n==0:
        return 1
    else:
        return n*fact(n-1)
n=int(input())
print(fact(n))
def fib(x):
    if x==0:
        return 1
    elif x==1:
        return 1
    else:
        return fib(x-1)+fib(x-2)
x=int(input())
print(fib(x))"""
"""class stu:
    def __init__(self,name,age,email):
        self.name=name
        self.age=age
        self.email=email
    def details(self):
        print(self.name, self.age, self.email)
name=(input())
age=int(input())
email=input()
stud1=stu(name,age,email)
stud1.details()"""
"""
f = open("demofile.txt", "w")
f.write("Previous content deleted \n")
f.close()
f = open("demofile.txt", "r")
print(f.read())
f = open("demofile.txt", "a")
f.write("The file has more content")
f.close()
f = open("demofile.txt", "r")
print(f.read())
"""
"""
fill=open("myfile.txt", "w")
l=["This is Delhi \n", "This is Paris \n"]
fill.write("Hello \n")
fill.writelines(l)
fill.close()
fill=open("myfile.txt", "r+")
print("Output of Read funciton")
print(fill.read(5))
print()
fill.seek(0)
print("Output of Readline")
print(fill.readline())
print()
fill.seek(0)
print("Output of Readlines")
print(fill.readlines())
print()
fill.close()
fill=open("myfile.txt","a")
fill.write("Today \n")
fill.close()
fill=open("myfile.txt","r")
print(fill.readlines())
fill.close()
fill=open("myfile.txt", "w")
fill.write("Tomorrow")
fill.close()
fill=open("myfile.txt", "r")
print(fill.readlines())
fill.close()
"""
"""
fin=open("demofile.txt", "r")
fout=open("news.txt", "w")
for line in fin:
    fout.write(line)
fin.close()
fout.close()
fout=open("news.txt", "r")
for line in fout:
    print(line, end=" ")
fout.close()
"""
a="aaple"
x=list(a)
print(x)
p=("").join(x)
print(p)