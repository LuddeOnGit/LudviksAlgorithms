#Bubble Sort, O(n²)

array = [9,8,7,6,5,4,3,2,1]

for i in range(len(array)):
    for j in range(i, len(array)):
        if array[j] < array[i]:
            array[i], array[j] = array[j], array[i]

print(array)
