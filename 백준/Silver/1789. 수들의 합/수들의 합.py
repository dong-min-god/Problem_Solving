sum = 0 
count = 0 
num = 1
a = int(input())
while(1):
    sum += num
    count+=1
    if(sum>a):
        count-=1
        break
    num+=1
print(count)