import statistics as stats

x = [10,20,30,40,50]
f = [2,5,8,4,1]

#expand the data

data = []  #empty list

for value , freq in zip(x,f):
    data.extend([value]*freq)
    print("Expanded data:")
    print(data)

    mean = stats.mean(data)
median = stats.median(data)
mode = stats.mode(data)

Range = max(data) - min(data)
variance = stats.variance(data)
std = stats.stdev(data)
cv = (std/mean)*100

print("\n Measures of central Tendancy")
print("Mean = ", round(mean,2))
print("Median = ",median)
print("Mode = ", mode)
print("Range = ",round(Range,2))
print("std = ",round(std,2))
print("cv = ",round(cv,2))