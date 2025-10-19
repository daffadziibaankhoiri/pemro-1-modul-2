import sys
input_data = sys.stdin.read().strip()
values = input_data.split()
a, b, i, j, x, y = map(int, values[:6])
hasil = (a - b) * i / j - (x + y)
print(f"{hasil:.3f}")