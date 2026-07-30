from scipy.stats import poisson
import math

lam = 4
x=3

prob = poisson.pmf(x,lam)

mean = lam

variance = lam
std = math.sqrt(lam)

print("poisson distribution")
print("------------------------")
print("probablity = ",round(prob,5))
print("Mean = ",mean)
print("variance =",variance)
print("standard deviation = ",round(std,4))
