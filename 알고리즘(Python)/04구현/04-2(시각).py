import time
n = int(input())
cnt = 0
start_time = time.time()
arr = [3,13,23,30,31,32,33,34,35,36,37,38,39,43,53]

for i in range(n+1):
    for j in range(60):
        for k in range(60):
            if i in arr:
                cnt += 1
            elif j in arr:
                cnt +=1
            elif k in arr:
                cnt +=1

                
end_time = time.time()


print(cnt)
print(end_time-start_time)
