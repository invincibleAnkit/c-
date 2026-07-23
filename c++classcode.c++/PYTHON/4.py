import numpy as np
from scipy.stats import skew, kurtosis

data = np.array([12, 15, 18, 28, 22, 25, 28, 30, 35])

print("Dataset:", data)

mean = np.mean(data)

m1 = np.mean((data - mean) ** 1)
m2 = np.mean((data - mean) ** 2)
m3 = np.mean((data - mean) ** 3)
m4 = np.mean((data - mean) ** 4)

print("\nCentral Moments:")
print("First Moment  =", round(m1, 4))
print("Second Moment =", round(m2, 4))
print("Third Moment  =", round(m3, 4))
print("Fourth Moment =", round(m4, 4))

sk = skew(data)
kt = kurtosis(data, fisher=False)

print("\nSkewness =", round(sk, 4))
print("Kurtosis =", round(kt, 4))

if abs(sk) < 0.5:
    print("Distribution: Approximately Symmetric")
elif sk > 0:
    print("Distribution: Positively Skewed")
else:
    print("Distribution: Negatively Skewed")

if kt < 3:
    print("Shape: Platykurtic")
elif kt == 3:
    print("Shape: Mesokurtic")
else:
    print("Shape: Leptokurtic")