ano = int(input("Digite um ano(numero inteiro positivo): "))
print ("Ano bissexto" if (ano % 400 == 0 or ano % 100 != 0) and (ano % 4 == 0) else "Ano não bissexto" )



