from scipy.stats import binom
import math

n=10
p=0.5
x=4

prob = bionom.pmf(x,n,p)

mean = n*p

variance = n*p*(1- p)
std = math.sqrt(variance)

print("Binomial distribution")
print("------------------------")
print("probablity p(x=4) = ",round(prob,5))
print("Mean = ",mean)
print("variance =",variance)
print("")
