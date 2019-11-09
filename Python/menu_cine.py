import os


def menu():
    """
    Función que limpia la pantalla y muestra nuevamente el menu
    """
    os.system('cls')
    print("Menú en python")
    print("Selecciona una opción")
    print("\t1 - primera opción")
    print("\t2 - segunda opción")
    print("\t3 - tercera opción")
    print("\t4 - cuarta opcion")
    print("\t9 - salir")


def pelicula(a):
    """ para presentar peliculas """

    if a == 1:
        print("La pelicula de hoy es: Alita Battle Angel, 6:35PM, Subtitulada")
        comida()
    if a == 2:
        print("La pelicula es Joker, 4PM, Doblada")
        comida()
    if a == 3:
        print("La pelicula es Aladin, 9PM, Subtitulada")
        comida()
    if a == 4:
        print("La pelicula es Frozen 2, 7PM, Doblada")
        comida()


def comida():
    """ funcion para comidas"""
    x = str(input("Quiere comida el combo cuesta $4.50: S/N ")).lower()
    if x == "s":
        a = int(input("Eliga combo del 1 al 4: "))

        if a == 1:
            print("Popcorn, nachos y soda mediana\n")
        if a == 2:
            print("Nachos, hotdog y soda grande \n")
        if a == 3:
            print("Hotdog, Popcorn y soda peque \n")
        if a == 4:
            print("Combo de comida del dia\n")
    if x == "n":
        print("No quiere combo \n")



while True:
    # Mostramos el menu
    menu()
    # solicituamos una opción al usuario
    opcionMenu = int(input("inserta una opcion: "))

    if opcionMenu == 1:
        print("")
        print("Has pulsado la opción 1...")
        pelicula(opcionMenu)

    elif opcionMenu == 2:
        print("")
        print("Has pulsado la opción 2...")
        pelicula(opcionMenu)
    elif opcionMenu == 3:
        print("")
        print("Has pulsado la opción 3...\n")
        pelicula(opcionMenu)
    elif opcionMenu == 4:
        print("Has pulsado la opción 4...")
        pelicula(opcionMenu)
    elif opcionMenu == 9:
        break
    else:
        print("")
        input("No has pulsado ninguna opción correcta...\npulsa una tecla para continuar")
