students = [("aditya", 85), ("stuti", 92), ("ayush", 78)]

def grades(student):
    return student[1]

sort = sorted(students, key=grades, reverse=True)

print("Output:")
print(sort)
