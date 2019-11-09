cantNotasString = input("Ingrese el tamano del arreglo: ")

cantNotas = int(cantNotasString)
notas = []
for i in range(0, cantNotas):
    notas.append(float(input("Ingrese el numero " + str(i + 1) + ": ")))
