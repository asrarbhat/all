arr=[
        [1,2,3],
        [4,5,6],
        [7,8,9]
    ]

print(arr[1][1])
arr[2][2]=33
for i in range(len(arr)):
        for j in range(len(arr[i])):
            print(arr[i][j],end="  ")
        print()
