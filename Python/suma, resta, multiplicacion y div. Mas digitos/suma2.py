x = int(input("Ingrese numero de elementos a sumar: "))
a = 0
for i in range(1, x+1):
    num = int(input("Ingrese numero: "))
    a = num + a

print("El total de la suma es: ", a)
