# Ashirwad Kumar  Email --> ashirwadrai5879@outlook.com

def minm_rooms(customers):
    custom_info = [(arrival, departure, i) for i, (arrival, departure) in enumerate(customers)]
    custom_info = sorted(custom_info)
    rooms = []
    room_allocation = [0] * len(customers)

    for arrival, departure, i in custom_info:
        assigned = False
        for room in rooms:
            if room[-1][1] < arrival:
                room.append((arrival, departure))
                room_allocation[i] = rooms.index(room) + 1
                assigned = True
                break
        if not assigned:
            rooms.append([(arrival, departure)])
            room_allocation[i] = len(rooms)
    print(len(rooms))
    print(*room_allocation)
