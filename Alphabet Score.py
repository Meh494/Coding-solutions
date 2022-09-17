#Thoughts: Not the fastest method(I think you can use ord as well) but very intuitive. Go through every char in the input, and find the position of that char in the alphabet string.
#          Since it's one char, the sum is just the position of that char in the alphabet. 
#Meh494

string_name = input()
al = "abcdefghijklmnopqrstuvwxyz"
total = 0
for element in range(0, len(string_name)):
    x = al.find(string_name[element])
    total +=  x + 1
print(total)
