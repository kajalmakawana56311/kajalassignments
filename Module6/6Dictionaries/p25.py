
# 25.	Write a Python program to create a dictionary of 6 key-value pairs.

# Define a dictionary with 6 key-value pairs
mydict = {
    "FName" : "Kajal",
    "LName" : "Makwana",
    "Age" : "24",
    "Add" : "Surat",
    "Email" : "k@gmail.com",
    "C_No" : 123456789
}

print(mydict)
# Output: {'FName': 'Kajal', 'LName': 'Makwana', 'Age': '24', 'Add': 'Surat', 'Email': 'k@gmail.com', 'C_No': 123456789}

# Access a value by key
print(mydict["Email"])      # Output: k@gmail.com

# Get all keys
print(mydict.keys())        # Output: dict_keys(['FName', 'LName', 'Age', 'Add', 'Email', 'C_No'])

# Get all values
print(mydict.values())      # Output: dict_values(['Kajal', 'Makwana', '24', 'Surat', 'k@gmail.com', 123456789])
