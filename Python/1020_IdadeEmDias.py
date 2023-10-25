# Entrada de Dados
idadeDias = int(input())

# Cálculo
anos = idadeDias/365
idadeDias %= 365

meses = idadeDias/30
idadeDias %= 30

# Saída de Dados
print(f"{int(anos)} ano(s)")
print(f"{int(meses)} mes(es)")
print(f"{int(idadeDias)} dia(s)")
