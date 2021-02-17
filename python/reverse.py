def reverse_string(s):
    i = 0
    j = len(s) - 1
    while i < j:
        temp = s[i]
        s[i] = s[j]
        s[j] = temp

        print(f'{i} - {s[i]} - {j} - {s[j]}')

        i += 1
        j -= 1
    return s


print(reverse_string(list('khandelwal')))
