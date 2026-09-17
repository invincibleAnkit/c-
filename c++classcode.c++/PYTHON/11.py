import numpy as np
import matplotlib.pyplot as plt

x = np.array([1, 2, 3, 4, 5, 6])
y = np.array([2.1, 4.9, 8.2, 12.8, 18.0, 24.5])

coeff_parabola = np.polyfit(x, y, 2)

coeff_general = np.polyfit(x, y, 3)
x_fit = np.linspace(min(x), max(x), 100)
y_parabola = np.polyval(coeff_parabola, x_fit)
y_general = np.polyval(coeff_general, x_fit)

print("Second-Degree Parabola:")
print(coeff_parabola)

print("\nGeneral Curve:")
print(coeff_general)

plt.scatter(x, y, color='red', label='Observed Data')
plt.plot(x_fit, y_parabola, label='Parabola Fit')
plt.plot(x_fit, y_general, '--', label='General Curve Fit')

plt.xlabel('x')
plt.ylabel('y')
plt.title('Curve Fitting using Least Squares Method')
plt.legend()
plt.grid(True)
plt.show()