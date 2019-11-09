cantNotasString = input("Ingrese la cantidad de tuplas: ")
cantNotas = int(cantNotasString)
notas = []
ponderaciones = []

for i in range(0, cantNotas):
 notas.append(float(input("Ingrese numero a " + str(i+1) + ": ")))
 ponderaciones.append(float(input("Ingrese numero b " + str(i+1) + ": ")))