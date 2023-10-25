# Entrada de dados
tempoGasto = int(input())
velocidadeMedia = int(input())

# Cálculo da distancia e da quantidade necessária de litros
distancia = tempoGasto * velocidadeMedia
quantidadeLitros = distancia / 12

# Saída de dados
print(f"{quantidadeLitros:.3f}")
