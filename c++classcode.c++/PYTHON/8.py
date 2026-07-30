from scipy.stats import norm

mean =70
std =10
x=80

prob = norm.cdf(x,mean,std)

print("poisson distribution")
print("------------------------")
print("probablity = ",round(prob,5))
print("Mean = ",mean)
print("variance =",std**2)
print("standard deviation = ",round(std,4))