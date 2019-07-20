cardvalues = "__23456789TJQKA"
cardsuits  = "HCSD"
 
HIGH =      0
ONEPAIR =   1
TWOPAIRS =  2
THREEKIND = 3
STRAIGHT  = 4
FLUSH     = 5
FULLHOUSE = 6
FOURKIND  = 7
STRFLUSH  = 8
ROYFLUSH  = 9
 
def equals(cards) :
    equals_len = 1
    equals_val = 0
    for i in xrange(1, len(cards)) :
        if cards[i-1][0] == cards[i][0] :
            equals_len += 1
            equals_val = cards[i][0]
        else :
            if equals_len > 1:
                break
 
    remaining = []
    for card in cards :
        if card[0] != equals_val :
            remaining.append(card)
    return equals_len, equals_val, remaining
 
def eval_hand(cards) :
    cards.sort(lambda x,y: cmp(x[0], y[0]))
 
    hand_value = 0
    hand_info = ()
 
    flush = True
    straight = True
    for i in xrange(1, len(cards)) :
        if cards[i-1][1] != cards[i][1] :
            flush = False
        if cards[i-1][0] + 1 != cards[i][0] :
            straight = False
 
    if straight and flush :
        if cards[0][0] == 10 :
            hand_value = ROYFLUSH
        else :
            hand_value = STRFLUSH
            hand_info  = (cards[0][0],)
    else :
        (equals_len, equals_val, remaining) = equals(cards)
        if equals_len == 4 :
            hand_value = FOURKIND
            hand_info  = (equals_val, remaining[-1][0])
        elif equals_len == 3 or equals_len == 2 :
            (remain_len, remain_val, remaining2) = equals(remaining)
 
            if equals_len + remain_len == 5 :
                hand_value = FULLHOUSE
                if equals_len == 3 :
                    hand_info = (equals_val, remain_val)
                else :
                    hand_info = (remain_val, equals_val)
            elif flush :
                hand_value = FLUSH
                hand_info  = (cards[-1][0],)
            elif straight :
                hand_value = STRAIGHT
                hand_info  = (cards[-1][0],)
            elif equals_len == 3 :
                hand_value = THREEKIND
                hand_info  = (equals_val, remaining[-1][0])
            else :
                if remain_len == 2 :
                    hand_value = TWOPAIRS
                    hand_info  = (equals_val, remain_val, remaining2[-1][0])
                else :
                    hand_value = ONEPAIR
                    hand_info  = (equals_val, remaining[-1][0])
        elif flush :
            hand_value = FLUSH
            hand_info  = (cards[-1][0],)
        elif straight :
            hand_value = STRAIGHT
            hand_info  = (cards[-1][0],)
        else :
            hand_value = HIGH
            hand_info  = (cards[-1][0],)
 
    return hand_value, hand_info
 
p1wins = 0
p2wins = 0
f = open("54.txt", "rb")
for line in f.readlines() :
    cards = line.strip().split(" ")
    for i in xrange(len(cards)) :
        card = cards[i]
        cards[i] = (cardvalues.index(card[0]), cardsuits.index(card[1]))
 
    p1hand = cards[0:5]
    p2hand = cards[5:10]
 
    (p1value, p1info) = eval_hand(p1hand)
    (p2value, p2info) = eval_hand(p2hand)
 
    if p1value > p2value :
        print(1)
        p1wins += 1
    elif p1value < p2value :
        print(2)
        p2wins += 1
    else :
        winner = False
        for i in xrange(len(p1info)) :
            if p1info[i] > p2info[i] :
                p1wins += 1
                print(1)
                winner = True
                break
            elif p1info[i] < p2info[i] :
                p2wins += 1
                print(2)
                winner = True
                break
        if not winner :
            print "Unresolved hand", line
 
f.close()
 
print "Player 1 wins: %d  Player 2 wins: %d" % (p1wins, p2wins)
