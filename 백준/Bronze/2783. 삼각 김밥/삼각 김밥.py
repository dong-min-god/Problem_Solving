x,y = map(int,input().split())
min_price = (x*1000 / y)
num = int(input())
for _ in range(num):
    x,y = map(int,input().split())
    if(min_price > (x*1000 / y)):
        min_price = (x*1000 / y)
print(round(min_price,2))