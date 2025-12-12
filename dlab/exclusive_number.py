

def max_cont_zero_count(text):
    max_cont_zero_count =0  
    for i in range(len(text)):
        if text[i] == '0':
            cont_zero_count =0
            for j in range(i, len(text)):
                if text[j] == '0':
                    cont_zero_count +=1
                else:
                    break
            max_cont_zero_count = max(max_cont_zero_count, cont_zero_count)
    return max_cont_zero_count 

def exclusive_number(text):
    max_zeros = max_cont_zero_count(text)
    return len(text) - (max_zeros+1)
    
def cut_right_zeros(text):
    right_index = len(text) -1
    count = 0
    while right_index >=0 and text[right_index] == '0':
        right_index -=1
        count +=1
    return text[:right_index +1],count

n = int(input())
for _ in range(n):
    text = input()
    text,cut_zero = cut_right_zeros(text)
    result = exclusive_number(text) + cut_zero
    print(result)