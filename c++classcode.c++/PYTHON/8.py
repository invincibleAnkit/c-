from scipy.stats import norm

mean =50
std =8


lower =40
upper =60

prob = norm.cdf(upper,mean,std)-norm.cdf(lower,mean,std)
print("probablity = ",round(prob,5))
print("Mean = ",mean)
print("variance =",std**2)
print("standard deviation = ",round(std,4))
