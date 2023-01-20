num = int(input())
while(1):
    val = int(input())
    if(val == 0):
        break
    if(val % num != 0):
        print("%d is NOT a multiple of %d." %(val,num))
    else:
        print("%d is a multiple of %d." %(val,num))