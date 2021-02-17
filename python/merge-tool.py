def merge_tool(s, k):
    from collections import OrderedDict
    for i in range(0, len(s), k):
        print("".join(OrderedDict.fromkeys(s[i:i+k])))

merge_tool('AABCAAADA', 3)
