# Q1 : find nth fibonacci number
# Q2 : find sum of n fibonacci numbers
# Q3 : print n terms fibonacci sequence
# Q4 : check if a number is fibonacci

def fibonacci(n):
    # Q1 : find nth fibonacci number

    if n <= 0:
        print('incorrect input')
    elif n == 1:
        return 0
    elif n == 2:
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)


def fibonacci_sequence(m):
    # Q3 : print n terms fibonacci sequence
    if m <= 0:
        print('incorrect input')
    else:
        fib = []
        for i in range(m):
            fib.append(str(fibonacci(i+1)))

        print(','.join(fib))
        print(f"nth fibonnaci number is : {fibonacci(m)}")

        # Q3 : print n terms fibonacci sequence
        fib_nums = [int(k) for k in fib]
        print(f'Sum of fibonacci sequence is : {sum(fib_nums)}')


fibonacci_sequence(10)