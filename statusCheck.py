import os, time 

#data = ['/home/aishwarya/Documents/dataStruc/checkSubString.cpp', '/home/aishwarya/Documents/dataStruc/binarySearch.cpp']
latest = 0
num = raw_input('Enter n')

data = []
for j in range(int(num)):
    value = raw_input("value is: ")
    data.append(value)

for i in data:
    if os.stat(i).st_atime > latest:
        latest = os.stat(i).st_atime
        latestString = i

print latestString


#st = os.stat("file.dat")
#print os.stat('/home/aishwarya/Documents/dataStruc/stack.cpp').st_atime
#print os.stat('/home/aishwarya/Documents/dataStruc/binarySearch.cpp').st_atime
#print os.stat('/home/aishwarya/Documents/dataStruc/checkSubString.cpp').st_atime
#print os.stat('/home/aishwarya/Documents/dataStruc/classes.cpp').st_atime

