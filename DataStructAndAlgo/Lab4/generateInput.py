import random

def generate_expression(max_depth=3):
#   numbers = random.randint(-1000000,1000001)
    operators = ['+', '-', '*', '/']
    parentheses = ['(', ')']

    def generate_term(depth):
        if depth == 0:
            return str(random.randint(-1000000,1000001))
            # return str(random.randint(-10,11))

        else:
            operator = random.choice(operators)
            left = generate_term(depth - 1)
            right = generate_term(depth - 1)
            if random.random() < 0.5:
                return f"({left}{operator}{right})"
            else:
                return f"{left}{operator}{right}"
    expression = generate_term(max_depth)
    result = eval(expression)
    return expression, result

# Example usage:
expression, result = generate_expression(3)
print("Expression:", expression)
print("Result:", result)
