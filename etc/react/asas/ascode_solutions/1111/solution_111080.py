line = input()
a, b, char = line.split()
a = int(a)
b = int(b)
if char=='+': print(a+b)
elif char=='-': print(a-b)
elif char=='*': print(a*b)
elif char=='/':
    num = a/b
    print(round(num,3))
elif char=='//': print(a//b)
elif char=='%': print(a%b)
else: print('Mission Impossible')