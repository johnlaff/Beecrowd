# Bibliotecas
import math

# Entrada
a, b, c = map(float, input().split())

# Calculo do delta
delta = pow(b, 2) - (4 * a * c)

# Testa se o delta é menor que zero ou se o valor de a é igual a zero
if delta < 0 or a == 0:
    print("Impossivel calcular")
# Caso contrário, calcula o valor de x1 e x2
else:
    x1 = (-b + math.sqrt(delta)) / (2*a)
    x2 = (-b - math.sqrt(delta)) / (2*a)

# Saída
    print(f"R1 = {x1:.5f}")
    print(f"R2 = {x2:.5f}")
