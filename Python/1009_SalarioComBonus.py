# Entrada de dados
nome = input()
salarioFixo = float(input())
totalDeVendas = float(input())

# Processamento
salarioFinal = salarioFixo + (totalDeVendas * 15/100)

# Saída de dados
print(f"TOTAL = R$ {salarioFinal:.2f}")