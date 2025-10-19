
import sys
input_data = sys.stdin.read().strip()
values = input_data.split()
jari, tinggi = map(float, values[:2])
phi = 3.142857
volume = phi * jari * jari * tinggi
luas = 2 * phi * jari * (jari + tinggi)
keliling = 2 * phi * jari

print(f"Volume : {volume:.2f}")
print(f"Luas    : {luas:.2f}")
print(f"Keliling: {keliling:.2f}")