def fib(n):
    if(n==1):
        return 0
    elif(n==2):
        return 1
    else:
        return fib(n-1) + fib(n-2)
    
n = int(input("Enter the value:"))
print("the fibonacci series is:",fib(n))