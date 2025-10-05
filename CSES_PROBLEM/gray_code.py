n = int(input())

result = []
for i in range(1 << n):  # 0 ... 2^n - 1
    gray = i ^ (i >> 1)
    result.append(format(gray, f'0{n}b'))

print("\n".join(result))
