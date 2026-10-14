# Created by Vova M
# Ellipse Calculator

print("============================================================ ")
print("Welcome to the Ellipse Calculator!")
print("============================================================ ")
print(
    "This program calculates the Area and Perimeter of an ellipse using its two unique dimensions"
)
print("- Semi-major axis (a)")
print("- Semi-minor axis (b)")
print("Let's begin! ")
print("============================================================ ")

# Get the measurements
a = float(input("Enter the semi-major axis: "))
b = float(input("Enter the semi-minor axis: "))
units = input("Enter the units (cm, m, mm): ")

# Check the measurements
if a <= 0 or b <= 0:
    print("Error: Axes must be greater than zero.")
else:
    # Calculate the area
    pi = 3.14159
    area = pi * a * b

    # Calculate the perimeter
    term1 = 3 * (a + b)
    term2 = ((3 * a + b) * (a + 3 * b)) ** 0.5
    perimeter = pi * (term1 - term2)

    # Show the results
    print()
    print("Area:", round(area, 2), "square", units)
    print("Perimeter:", round(perimeter, 2), units)
