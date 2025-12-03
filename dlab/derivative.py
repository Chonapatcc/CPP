def handle_empty(s):
    if s =="":
        return 1
    else:
        return int(s)


def derivative(text):
    text = text.replace(" ", "")
    text_list = text.split("+")
    result = []
    for term in text_list:
        if "x" in term:
            coeff,power = term.split("x")
            coeff,power = handle_empty(coeff), handle_empty(power)
            new_coeff = coeff * power
            new_power = power - 1
            if(new_power >0 and new_coeff ==1 ):
                new_coeff =""
            if new_power == 0:
                result.append(f"{new_coeff}")
            elif new_power == 1:
                result.append(f"{new_coeff}x")
            else:
                result.append(f"{new_coeff}x{new_power}")

    return "+".join(result)

def main():
    text = input()
    print(derivative(text))

if __name__ == "__main__":
    main()