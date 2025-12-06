def valid(x, y):
    return 0 <= x < n and 0 <= y < n and array[x][y] != 2

def bfs(start_x, start_y):
    visited = [[False]*n for _ in range(n)]
    visited[start_x][start_y] = True
    queue = [(start_x, start_y, 0)]
    max_distance = -1
    while queue:
        x, y, distance = queue.pop(0)
        if array[x][y] == 1:
            max_distance = max(max_distance, distance)

        for dx, dy in [(-1,0),(1,0),(0,-1),(0,1)]:
            nx, ny = x + dx, y + dy
            if valid(nx, ny):
                if not visited[nx][ny]:
                    visited[nx][ny] = True
                    queue.append((nx, ny, distance + 1))
    print(max_distance)


n = int(input())
start_x, start_y = map(int, input().split())

array = []

for _ in range(n):
    array.append(list(map(int, input().split())))


bfs(start_x, start_y)

