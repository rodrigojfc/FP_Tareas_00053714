x = int(input("Ingrese numero de elementos a multiplicar: "))
a = 1
for i in range(1, x+1):
    num = int(input("Ingrese numero a multiplicar: "))
    a = num * a

print("El total de la multiplicacion es: ", a)