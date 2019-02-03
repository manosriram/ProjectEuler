n = int(input())
sum = 0

while (n > 0):
    m = int(n % 10)
    sum = sum + m
    n /= 10

print(sum)
