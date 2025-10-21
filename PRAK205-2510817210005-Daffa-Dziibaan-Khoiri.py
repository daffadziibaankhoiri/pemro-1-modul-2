import sys

input_data = sys.stdin.read().strip()
values = input_data.split()
tinggi, sisi_miring = map(float, values[:2])

alas = (sisi_miring**2 - tinggi**2) ** 0.5
keliling = tinggi + sisi_miring + alas
luas = (alas * tinggi) / 2
print(f"Alas    : {alas:.0f} cm")
print(f"Tinggi  : {tinggi:.0f} cm")
print(f"Keliling : {keliling:.0f} cm")
print(f"Luas    : {luas:.0f} cm^2")