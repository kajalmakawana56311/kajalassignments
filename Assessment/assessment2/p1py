import os

# create folder
if not os.path.exists("data"):
    os.mkdir("data")

while True:
    print("\n1. Create Post")
    print("2. View Files")
    print("3. Read File")
    print("4. Exit")

    ch = input("Enter choice: ")

    # Create Post
    if ch == "1":
        name = input("Enter name: ")
        title = input("Enter title: ")
        content = input("Enter content: ")

        filename = "data/" + name + "_" + title + ".txt"

        f = open(filename, "w")
        f.write("Name: " + name + "\n")
        f.write("Title: " + title + "\n")
        f.write("Content: " + content)
        f.close()

        print("Post saved!")

    # View Files
    elif ch == "2":
        files = os.listdir("data")
        for i in range(len(files)):
            print(i+1, files[i])

    # Read File
    elif ch == "3":
        files = os.listdir("data")

        for i in range(len(files)):
            print(i+1, files[i])

        n = int(input("Enter file number: "))

        f = open("data/" + files[n-1], "r")
        print("\nFile Data:\n")
        print(f.read())
        f.close()

    # Exit
    elif ch == "4":
        print("Exit")
        break

    else:
        print("Wrong choice")