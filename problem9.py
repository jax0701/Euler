"""A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.
There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc."""
import time

def pythagorean(a,b,c):
    return a*a+b*b==c*c

def calc():
    for a in range(1,1000):
        for b in range(a+1,1000):
            c = 1000-a-b
            if pythagorean(a,b,c):
                print a*b*c
                print ("a="+str(a)+" b="+str(b)+" c="+str(c))
                break

if __name__ == '__main__':
    start = time.time()
    calc()
    finish = time.time()
    print finish-start, "seconds process time"
