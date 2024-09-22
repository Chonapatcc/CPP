import random

def generate_test_case(num_cities):
    total_budget = random.randint(500, 1000)  # Adjust range as needed
    num_features = 4

    print(total_budget)
    print(num_cities)

    cities = []
    for _ in range(num_cities):
        features = [
            random.randint(100, total_budget),  # Feature 1
            random.randint(50, 500),   # Feature 2
            random.randint(0, 0),    # Feature 3
            random.randint(0, 100)     # Feature 4
        ]
        cities.append(features)

    # Print city features
    for features in cities:
        print(*features)

    # Generate a random directed acyclic graph (DAG) for city connections
    connections = []
    for i in range(1, num_cities):
        parent = random.randint(0, i - 1)
        connections.append((i, parent))

    # Print connections
    for connection in connections:
        print(*connection)

# Example usage
generate_test_case(num_cities=100) 