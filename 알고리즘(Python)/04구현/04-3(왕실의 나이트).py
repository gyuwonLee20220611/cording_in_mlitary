n = str(input())
col = n[0:1]
row = int(n[-1:])
arr = ['a','b','c','d','e','f','g','h']
cnt = 0

arr_1 = [[2,1],[2,-1],[1,2],[-1,2],[-2,1],[-2,-1],[-1,-2],[1,-2]]

for i in arr_1:
    pos = [arr.index(col)+1,row]
    sum = [x + y for x, y in zip(i,pos)]
    if sum[0] > 0 and sum[0] < 9 and sum[1] > 0 and sum[1] < 9:
        cnt+=1
print(cnt)
