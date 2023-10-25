# Inicialização da variável par
par = 0

# Loop para receber 5 números e verificar se são pares
for _ in range(5):
    numero = int(input())
    if numero % 2 == 0:
        par += 1

# Imprime o resultado
print(f"{par} valores pares")
