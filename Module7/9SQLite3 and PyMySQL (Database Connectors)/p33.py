import sqlite3

# Database connect
conn = sqlite3.connect("mydatabase.db")

# Cursor create
cursor = conn.cursor()

# Table create (agar pehle se nahi hai)
cursor.execute("""
CREATE TABLE IF NOT EXISTS employee(
    id INTEGER PRIMARY KEY,
    name TEXT,
    salary REAL
)
""")

# Data insert
cursor.execute("INSERT INTO employee (name, salary) VALUES (?, ?)", ("Rahul", 25000))
cursor.execute("INSERT INTO employee (name, salary) VALUES (?, ?)", ("Amit", 30000))
cursor.execute("INSERT INTO employee (name, salary) VALUES (?, ?)", ("Priya", 28000))

# Save changes
conn.commit()

# Data fetch
cursor.execute("SELECT * FROM employee")
rows = cursor.fetchall()

print("Employee Records:")
for row in rows:
    print(row)

# Close connection
conn.close()