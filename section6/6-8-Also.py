a = 2.0
b = 1.0
sum = 0

for i in range(20):
    sum += a / b
    a, b = a+b, a

print sum
    
