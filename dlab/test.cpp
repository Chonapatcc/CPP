lst = [[1,2],[3,4]]

lst[1] = lst[0]
lst[0].append(5)
print(lst)  # Output: [[1, 2, 5], [3, 4]]