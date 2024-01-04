from collections import Counter

input_list = [25, 28, 33, 27, 28, 25, 25, 31]

# Use Counter to count occurrences of each unique element
count_dict = Counter(input_list)

# Extract counts and create a new list
output_list = list(count_dict.values())

print("Input:", input_list)
print("Output:", output_list)
