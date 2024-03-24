n, m, k = map(int, input().split())
arr = list(map(int, input().split()))

result = 0

arr.sort()


if arr[-1] == arr[-2]:
    result += arr[-1] * m
else:
    result += arr[-1] * (m//k * k)
    result +=arr[-2] * (m % k)

print("reuslt: ", result)
