import statistics as stats

data = [8,10,12,14,16,18,18,20,22,24]

print("Raw data",data)

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
print("variance = ", round(variance,2))