import math

sample_mean = float(input("Enter sample mean: "))
population_mean = float(input("Enter hypothesized mean: "))
std_dev = float(input("Enter standard deviation: "))
n = int(input("Enter sample size: "))

print("\nSelect type of test:")
print("1. Left-tail test (H1: μ < μ₀)")
print("2. Right-tail test (H1: μ > μ₀)")
print("3. Two-tail test (H1: μ != μ₀)")

choice = int(input("Enter your choice: "))

SE = std_dev / math.sqrt(n)

z = (sample_mean - population_mean) / SE

print("\nStandard Error =", round(SE, 4))
print("Calculated Z =", round(z, 4))

if choice == 1:
    critical_value = -1.645

    print("Test type: Left-tailed")
    print("Critical Z =", critical_value)

    if z < critical_value:
        print("Decision: Reject H0")
    else:
        print("Decision: Do not reject H0")

elif choice == 2:
    critical_value = 1.645

    print("Test type: Right-tailed")
    print("Critical Z =", critical_value)

    if z > critical_value:
        print("Decision: Reject H0")
    else:
        print("Decision: Do not reject H0")

elif choice == 3:
    critical_value = 1.96

    print("Test type: Two-tailed")
    print("Critical Z = ±", critical_value)

    if abs(z) > critical_value:
        print("Decision: Reject H0")
    else:
        print("Decision: Do not reject H0")

else:
    print("Invalid choice!")