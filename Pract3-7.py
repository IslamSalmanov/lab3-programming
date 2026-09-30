print("1. Из USD в RUB")
print("2. Из EUR в RUB")
n=int(input())
if n==1:
    u=float(input())
    r=u*84.41
    print( f"{u} USD = {r} RUB")
elif n==2:
    e=float(input())
    r=e*96.25
    print( f"{e} EUR = {r} RUB")
else:
    print("Неккоректный выбор")