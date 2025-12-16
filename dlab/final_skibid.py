def valid(hero, need):
    size = len(hero)
    for i in range(size):
        if hero[i] < need[i]:
            return False
    return True

resistances = [[int(x) for x in input().split()] for _ in range(4)]

need = [int(x) for x in input().split()]

name_list = ["fuqbomb101", "fuqbomb202", "fuqbomb303", "fuqbomb404"]
printed = False
for i in range(4):
    if valid(resistances[i], need):
        print(name_list[i])
        printed = True
        break

if not printed:
    print("DafuqBomb The Loser")
