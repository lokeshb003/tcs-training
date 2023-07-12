def lanes(a,b,c,d,n):
    if(n==1):
        return 0
    elif(n==2):
        return 1
    else:
        return b+(n-1)*a









a = int(input("Enter the value for a:"))
b = int(input("Enter the value for b:"))
c = int(input("Enter the value for c:"))
d = int(input("Enter the value for d:"))
n = int(input("Enter the value for N:"))
print("The output is:",lanes(a,b,c,d,n))