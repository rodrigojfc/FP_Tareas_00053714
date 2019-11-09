cantNotasString = input("Ingrese el tamano del arreglo: ")

cantNotas = int(cantNotasString)
notas = []
suma = 0
for i in range(0, cantNotas):
    notas.append(float(input("Ingrese el numero " + str(i + 1) + ": ")))

for i in notas:
    suma = i + suma

promedio = suma / len(notas)
print("El promedio es: ", promedio)