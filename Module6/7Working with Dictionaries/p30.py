# 30.	Write a Python program to separate keys and values from a dictionary using keys() and values() methods. 

# Define a dictionary key-value pairs
mydict = {
    "FName" : "Kajal",
    "LName" : "Makwana",
    "Age" : "24",
    "Add" : "Surat",
    "Email" : "k@gmail.com",
    "C_No" : 123456789
}

# Print the keys
print(mydict.keys())        # Output: dict_keys(['FName', 'LName', 'Age', 'Add', 'Email', 'C_No'])

# Print the values
print(mydict.values())      # Output: dict_values(['Kajal', 'Makwana', '24', 'Surat', 'k@gmail.com', 123456789])
