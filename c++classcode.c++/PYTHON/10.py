import matplotlib.pyplot as plt

ages = [
22, 25, 27, 30, 34, 36, 40, 42, 45, 48,
50, 52, 55, 58, 60, 63, 65, 67, 70, 72,
24, 28, 31, 35, 38, 41, 44, 47, 49, 53,
56, 59, 61, 64, 66, 68, 71, 73, 75, 78,
26, 29, 33, 37, 43, 46, 54, 57, 69, 80
]

bins = [20, 30, 40, 50, 60, 70, 80, 90]

plt.figure(figsize=(10, 5))

plt.hist(
    ages,
    bins=bins,
    color='pink',
    edgecolor='black'
)

plt.title("Histogram of Patient Ages",color='red')
plt.xlabel("Age (Years)")
plt.ylabel("Frequency")

plt.grid(axis='y')
plt.show()