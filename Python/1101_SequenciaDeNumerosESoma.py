m, n = map(int, input().split())

while m > 0 and n > 0:
    start = min(m, n)  # Começa do menor valor
    end = max(m, n)  # Termina no maior valor

    soma = 0
    for valor in range(start, end + 1):
        soma += valor
        print(valor, end=" ")  # Imprime na mesma linha

    print(f"Sum={soma}")
    m, n = map(int, input().split())
