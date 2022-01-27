# Converts distance in miles to kilometers

miles = input("Enter distance in miles : ")
kilometers_per_miles = 1.609
kilometer = kilometers_per_miles * float(miles)
print(f"{miles} miles equals to {kilometer} kilometers.")
