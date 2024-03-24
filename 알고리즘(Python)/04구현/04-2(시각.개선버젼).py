import time
n = int(input())
cnt = 0
start_time = time.time()


for i in range(n+1):
    for j in range(60):
        for k in range(60):
            if '3' in str(i) + str(j) + str(k):
                cnt +=1

                
end_time = time.time()


print(cnt)
print(end_time-start_time)
