# 27.	Write a Python program to update a value in a dictionary.

# Define a dictionary key-value pairs
mydict = {
    "FName" : "Kajal",
    "LName" : "Makwana",
    "Age" : "24",
    "Add" : "Surat",
    "Email" : "k@gmail.com",
    "C_No" : 123456789
}

# Update a value using direct assignment
# mydict.update({"FName" : "Aradhya"})
mydict["FName"] = "Aradhya" 

# Print the updated first name separately
print(mydict["FName"])      # Output: Aradhya

print(mydict)       # Output: {'FName': 'Aradhya', 'LName': 'Makwana', 'Age': '24', 'Add': 'Surat', 'Email': 'k@gmail.com', 'C_No': 123456789}
