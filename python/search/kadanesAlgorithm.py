# Kadane's Algorithm, O(n)
array = [-2,2,5,-11,6]
max_sum = array[0]
current_sum = array[0]

for i in range(1,len(array)):
    current_sum += array[i]
    max_sum = current_sum if current_sum > max_sum else max_sum
    current_sum = array[i] if array[i] > current_sum else current_sum

print(max_sum)
