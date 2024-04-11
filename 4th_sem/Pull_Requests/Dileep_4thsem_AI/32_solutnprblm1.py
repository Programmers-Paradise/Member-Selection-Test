#problem no.1



n = int(input())  # give the input of no.
customers = []
for _ in range(n):
    arrival, departure = map(int, input().split())
    customers.append((arrival, departure))

customers.sort()
rooms = {}
room_number = 1

for arrival, departure in customers:
    assigned_room = None
    for room, end_date in rooms.items():
        if end_date < arrival:
            assigned_room = room
            break
    if assigned_room is None:
        assigned_room = room_number
        room_number += 1

    rooms[assigned_room] = departure

print(len(rooms))

for arrival, departure in customers:
    for room, end_date in rooms.items():
        if end_date >= arrival:
            print(room, end=' ')
            del rooms[room]
            break

print()
