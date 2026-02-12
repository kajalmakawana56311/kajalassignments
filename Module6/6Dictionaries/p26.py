
# 26.	Write a Python program to access values using keys from a dictionary.

# Define a dictionary key-value pairs
mydict = {
    "FName" : "Kajal",
    "LName" : "Makwana",
    "Age" : "24",
    "Add" : "Surat",
    "Email" : "k@gmail.com",
    "C_No" : 123456789
}

# Access values using dictionary keys
print("First Name: ", mydict["FName"])        # Output: First Name:  Kajal
print("Last Name: ", mydict["LName"])         # Output: Last Name:  Makwana
print("Age: ", mydict["Age"])                 # Output: Age:  24
print("Address: ", mydict["Add"])             # Output: Address:  Surat
print("Email: ", mydict["Email"])             # Output: Email:  k@gmail.com 

# Alternative method: Using get()
print("Contact: ", mydict.get("C_No"))       # Output: Contact:  123456789
