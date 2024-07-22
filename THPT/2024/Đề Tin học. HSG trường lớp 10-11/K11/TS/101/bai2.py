a = int(input())
b, dem = 1 , 0
while a >= 0:
    for i in range(1,a +b + 1):
        if ((a + b) % i == 0):
            dem = dem + 1
    if dem == 2:
        print(b)
        break
    dem = 0
    b = b + 1
