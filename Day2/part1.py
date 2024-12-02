# file = open("input.txt", "r")
# contents = file.read()
# file.close()

# splitted = contents.split("\n")


# safe = 0

# for i in splitted:
#     lst = i.split(" ")
#     sort = False
#     nums = False

#     if sorted(lst, reverse=True) == lst or sorted(lst) == lst:
#         #print(lst)
#         sort = True
#     for j in range(len(lst) -1):
#         if abs(int(lst[j]) - int(lst[j+1])) in range(1,4):
#             nums = True
#         else:
#             nums = False
#             break

#     if sort and nums:
#         safe += 1

# print(safe)

file = open("input.txt", "r")
contents = file.read()
file.close()


splitted = contents.split("\n")



safe = 0


for i in splitted:
    lst = i.split(" ")
    #lst = ['8','3','2','1']
    sort = False
    nums = False


    if sorted(lst, reverse=True) == lst or sorted(lst) == lst:
        print(lst)
        sort = True
    for j in range(len(lst) -1):
        if abs(int(lst[j]) - int(lst[j+1])) in range(1,4):
            nums = True
        else:
            nums = False
            break


    if sort and nums:
        safe += 1

print
print(safe)