def factorial(n):
    output=1
    if n<=0:
        return 0
    for i in range(1,n+1):
        output*=i
    return output
for i in range(10):
    print(factorial(i-3))
