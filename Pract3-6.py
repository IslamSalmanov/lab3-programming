print('Конвертор температур')
print('1. Из °C в °F')
print('2. Из °F в °C')
n=int(input())
if n==1:
    t=float(input())
    t1=t*9/5+32
    print(f'{t} °C = {t1:.1f} °F')
elif n==2:
    t=float(input())
    t1=(t-32)*5/9
    print(f'{t} °F = {t1:.1f} °C')
else:
    print('Неккоректный выбор')