def get_freq(s):
    freq = {}

    for c in s:
        if c in freq:
            freq[c] += 1
        else:
            freq[c] = 1

    return freq

def is_substr(a,b):
    freq_a = {}
    freq_b = {}

    for c in a:
        if c in freq_a:
            freq_a[c] += 1
        else:
            freq_a[c] = 1

    for c in b:
        if c in freq_b:
            freq_b[c] += 1
        else:
            freq_b[c] = 1

    list_a = freq_a.keys()
    list_b = freq_b.keys()

    for c in list_a:
        if c in list_b:
            return 'YES'
    
    return 'NO'


print(is_substr('hello', 'world'))