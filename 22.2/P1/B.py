from collections import deque

deck = deque()
for _ in range(4):
    cards = input().split()
    for card in cards:
        if card[0] in 'TJQK':
            deck.append(10)
        elif card[0] == 'A':
            deck.append(1)
        else:
            deck.append(int(card[0]))

count, last = 0, 0
while count <= 21:
    last = count
    count += deck.popleft()

print(last)
