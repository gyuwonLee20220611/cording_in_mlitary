n = int(input())
point= [1,1]
arr = list(map(str, input().split()))
Len = len(arr)

for i in arr:
    if i == 'L':
        point[1] -= 1
        if point [1] == 0:
            point[1] += 1
    
    elif i == 'R':
        point[1] += 1
        if point [1] > n:
            point[1] -= 1

    elif i == 'U':
        point[0] -= 1
        if point [0] == 0:
            point[0] += 1
    
    elif i == 'D':
        point[0] += 1
        if point [0] > n:
            point[0] -= 1


print(point)
