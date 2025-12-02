def show_data(data):
    print("Data",end="")
    for item in data:
        print(" " + str(item),end ="")
    print(end="\n")

def Sum(data):
    total = sum(data)
    print("Sum",total)

def mean(data):
    avg = sum(data) / len(data)
    print("Mean", int(avg))

def median(data):
    if len(data) %2 ==1:
        med = data[len(data)//2]
    else:
        med = (data[len(data)//2 -1] + data[len(data)//2]) /2
    print("Median", int(med))

def mode(data):
    frequency = {}
    for item in data:
        if item in frequency:
            frequency[item] += 1
        else:
            frequency[item] = 1
    max_freq = max(frequency.values())
    modes = [key for key, value in frequency.items() if value == max_freq]
    print("Mode", modes[0])

def Max(data):
    maximum = data[-1]
    print("Max", maximum)

def Min(data):
    minimum = data[0]
    print("Min", minimum)

def main():
    data = [int(x) for x in input().split()]

    data.sort()
    show_data(data)
    Sum(data)
    mean(data)
    median(data)
    mode(data)
    Max(data)
    Min(data)
if __name__ == "__main__":
    main()



'''
4 5 56 34 56 67


Data 4 5 34 56 56 67
Sum 222 
Mean 37
Median 45 
Mode 56 
Max 67 
Min 4


10 10 10 10

Data 10 10 10 10
Sum 40
Mean 10
Median 10
Mode 10.00  
Max 10.00  
Min 10.00


7 3 5 1 9

Data 1 3 5 7 9
Sum 25
Mean 5
Median 5 
Mode 1.00  
Max 9.00  
Min 1.00
'''