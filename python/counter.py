from collections import Counter


shoes_count = int(input())

shoes = Counter(map(int, input().split()))

customers_count  = int(input())

income = 0 

for _ in range(customers_count):
    size, price = map(int, input().split())

    if shoes[size]:
        income += price
        shoes[size] -= 1

print(income)