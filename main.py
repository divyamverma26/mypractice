"""a = int(input())
b = int(input())
try:
    num = a/b
    print(num)
except:
    print("exception occurred")
def fun(n):
    print(n)
try:
    a=int(input("a: "))
    b=int(input("b: "))
    c=a+b
    e=a*b
    print(c)
    d=a/b
    print(d)
    print(e)
    print("try successful")
except ZeroDivisionError:
    print("zero error occurred")
except NameError:
    print("Name error occurred")
except Exception:
    print("Exception occurred")
"""
"""
def checkage(age):
    if age<0:
        raise ValueError("age should be greater than 0")
    print("age is valid")
try:
    age=int(input())
    checkage(age)
except ValueError as err:
    print(err.args)
finally:
    print("Always executed")
"""
"""
class OurException(Exception):
    def __init__(self, message):
        self.message = message
class UserException:
    try:
        a=int(input("a: "))
        b=int(input("b: "))
        if b==0:
            raise OurException("b should be greater than 0")
        d=a/b
        print("division=",d)
    except OurException as err:
        print("user defined exception:", err.message)
    finally:
        print("I am always executed")
"""
def fun(n):
    a, b = 0, 1
    for i in range(1, n+1):
        print(a)
        a, b = b, a+b
#n=int(input())
#fun(n)
def arm(n):
    i = p = 0
    m = q = n
    while n > 0:
        r = n % 10
        n = n//10
        i = i+1
    while m > 0:
        s = m % 10
        p = p+(s**i)
        m = m//10
    if p == q:
        print("armstrong")
    else:
        print("not")
"""n=int(input("num: "))
arm(n)"""

import random
print(random.randrange(1,6))
print(random.randint(1,10))
print(random.seed())
n=int(input())
x=[]
for i in range(2,n+1):
    j=2
    m=0
    while j<i:
        if i%j==0:
            m=1
            break
        else:
            pass
        j=j+1
    if m==0:
        x.append(i)
print(x)