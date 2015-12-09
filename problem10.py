"""The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million."""

import math

def checkPrime(n):
    prime = True
    
    """ it's enough to check till root value of n"""
    sqrt_value = math.sqrt(n)
    
    if n%2==0:
        prime = False
    else:
        for i in range(2,int(sqrt_value)+1):
            if n%i == 0:
                prime = False
                break
    return prime

sum = 2            
for n in range(3,2000001):
    if checkPrime(n):
        sum = sum + n
print sum      
    