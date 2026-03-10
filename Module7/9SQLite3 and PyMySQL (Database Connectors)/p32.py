import sqlite3

con = sqlite3.connect("data.db")

# print("connect")

# qry = "create table student(id int primary key, name varchar(20),email varchar(50))"
# qry = "insert into student values(2,'Kk','kk@gmail.com')"
# con.execute(qry)
con.commit()
data  = con.execute("select * from student")
for i in data.fetchall():
    print(i)

# print("table create")

