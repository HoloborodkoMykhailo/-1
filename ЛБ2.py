t = int(input("t = "))
z = t % 6
if (z == 1) or (z == 2) or (z == 3): 
    print("Горить зелений")
else: 
    if z == 4:
       print("Горить жовтий")
    else: 
       print("Горить червоний")
input()
