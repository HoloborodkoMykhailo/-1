a = float(input("a = "))
b = float(input("b = "))
c = float(input("c = "))
p = float((a + b + c)/2)
import math
a1 = float(2*(math.sqrt(b*c*p*(p - a)))/(b + c)) # бісектриса з вершини a
b1 = float(2*(math.sqrt(a*c*p*(p - b)))/(a + c)) # бісектриса з вершини b
c1 = float(2*(math.sqrt(b*a*p*(p - c)))/(b + a)) # бісектриса з вершини c
S = float(math.sqrt(p*(p - a)*(p - b)*(p - c))) # площа трикутника
R = float((a*b*c)/(4*S)) # радіус описаного трикутника
r = float(S/p) # радіус вписаного трикутника
print("a1 = ", a1)
print("b1 = ", b1)
print("c1 = ", c1)
print("R = ", R)
print("r = ", r)
input()
