def is_palindrome(s):
    alphabets = list(map(chr, range(97, 123)))
    numbers = list(map(chr, range(48, 58)))

    s = ''.join([c.lower() for c in s if c.lower() in alphabets or c in numbers])
    new_s = []
    for i in range(len(s), 0, -1):
        new_s.append(s[i - 1])

    new_s = ''.join(new_s)

    # print(new_s)
    # print(s)

    if s == new_s:
        return True
    else:
        return False


print(is_palindrome('0P'))
