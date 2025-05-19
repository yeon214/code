from fractions import Fraction
multi = input()
multi = int(multi)
num = 1
for i in range (multi):
    num *= (i+1)
num = Fraction(1,num)
num *= 2432902008176640000
print(num)