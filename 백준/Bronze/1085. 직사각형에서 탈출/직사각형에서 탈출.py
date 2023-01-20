num = list(map(int,input().split()))
if(num[2]-num[0] > num[0]):
    a = num[0]
else:
    a = num[2] - num[0]
if (num[3] - num[1] > num[1]):
    b = num[1]
else:
    b = num[3] - num[1]
if(a> b):
    a = b
else:
    a = a
print("%d" %a)