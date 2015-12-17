from time import time

start = time()

f = open("11.txt", "r")
data = f.readlines()

a = []
b = []

for line in data:
    column = line.split(" ")
    b = [num for num  in column]
    a.append(b)

multiply1 = 0
multiply2 = 0
multiply3 = 0
multiply4 = 0
product = 0

for i in range(20):
    for j in range(20):
        if (j<17):
            multiply1 =  int(a[i][j])*int(a[i][j+1])*int(a[i][j+2])*int(a[i][j+3]) 
            if (i<17): 
                multiply3 = int(a[i][j])*int(a[i+1][j+1])*int(a[i+2][j+2])*int(a[i+3][j+3])

        if (i<17):
            multiply2 =  int(a[i][j])*int(a[i+1][j])*int(a[i+2][j])*int(a[i+3][j]) 
            if (j>2): 
                multiply4 = int(a[i][j])*int(a[i+1][j-1])*int(a[i+2][j-2])*int(a[i+3][j-3])
        
        multip=max(multiply1,multiply2,multiply3,multiply4)
        
        if multip > product:
            product = multip

finish = time()
duration = finish - start

print product
print duration





