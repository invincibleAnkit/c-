import statistics as stats

classes = [(0,10),(10,20),(20,30),(30,40),(40,50)]
frequency = [5,8,12,7,3]

midpoints = [(a+b)/2 for a,b in classes]

data = []

for m,f in zip(midpoints,frequency):
    data.extend([m]*f)

    print("Expanded date:")
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
print("variance = ",round(variance,2))