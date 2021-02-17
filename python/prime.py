def is_prime(n):
    if n <= 1:
        return

    for i in range(2, n):
        if n % i == 0:
            return

    return True


# print(is_prime(12))
def count_prime(m):

    if m <= 0:
        return 0

    prime_nums = []

    for k in range(m):
        if is_prime(k):
            prime_nums.append(k)

    print(f'Total prime numbers under {m} are : {len(prime_nums)} '
          f'\n and they are \n {prime_nums}')

    return len(prime_nums)


count_prime(499979)
