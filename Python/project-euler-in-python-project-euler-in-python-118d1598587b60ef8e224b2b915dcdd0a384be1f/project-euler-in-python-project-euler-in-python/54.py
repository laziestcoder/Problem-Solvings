"""In the card game poker, a hand consists of five cards and are ranked, from lowest to highest, in the following way:

    High Card: Highest value card.
    One Pair: Two cards of the same value.
    Two Pairs: Two different pairs.
    Three of a Kind: Three cards of the same value.
    Straight: All cards are consecutive values.
    Flush: All cards of the same suit.
    Full House: Three of a kind and a pair.
    Four of a Kind: Four cards of the same value.
    Straight Flush: All cards are consecutive values of same suit.
    Royal Flush: Ten, Jack, Queen, King, Ace, in same suit.

The cards are valued in the order:
2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King, Ace.

If two players have the same ranked hands then the rank made up of the highest value wins; for example, a pair of eights beats a pair of fives (see example 1 below). But if two ranks tie, for example, both players have a pair of queens, then highest cards in each hand are compared (see example 4 below); if the highest cards tie then the next highest cards are compared, and so on.

Consider the following five hands dealt to two players:
Hand	 	Player 1	 	Player 2	 	Winner
1	 	5H 5C 6S 7S KD
Pair of Fives
	 	2C 3S 8S 8D TD
Pair of Eights
	 	Player 2
2	 	5D 8C 9S JS AC
Highest card Ace
	 	2C 5C 7D 8S QH
Highest card Queen
	 	Player 1
3	 	2D 9C AS AH AC
Three Aces
	 	3D 6D 7D TD QD
Flush with Diamonds
	 	Player 2
4	 	4D 6S 9H QH QC
Pair of Queens
Highest card Nine
	 	3D 6D 7H QD QS
Pair of Queens
Highest card Seven
	 	Player 1
5	 	2H 2D 4C 4D 4S
Full House
With Three Fours
	 	3C 3D 3S 9S 9D
Full House
with Three Threes
	 	Player 1

The file, poker.txt, contains one-thousand random hands dealt to two players. Each line of the file contains ten cards (separated by a single space): the first five are Player 1's cards and the last five are Player 2's cards. You can assume that all hands are valid (no invalid characters or repeated cards), each player's hand is in no specific order, and in each hand there is a clear winner.

How many hands does Player 1 win?
"""
from functools import total_ordering

@total_ordering
class Hand(object):
    def __init__(self, s):
        self.order = ["High Card", "One Pair", "Two Pairs", 
                "Three of a Kind", "Straight", "Flush",
                "Full House", "Four of a Kind", "Straight Flush"]
        self.cards = s
        self.hand = "High Card"
        self.rank = 2
        self.parse_cards()
    
    def parse_cards(self):
        c = {"2": 2, "3": 3, "4": 4, "5": 5, "6": 6, "7": 7, 
                "8": 8, "9": 9, "T": 10, "J": 11, "Q": 12, "K": 13,
                "A": 14}
        
        cards = {(c[i[0]], i[1]) for i in self.cards.split()}
        colors = [i[1] for i in cards]
        values = sorted([i[0] for i in cards])
        self.values = values
        self.cards = cards
        
        if len(set(colors)) == 1: 
            if self._is_consecutive(values):
                self.hand = "Straight Flush"
                self.rank = values[-1]
                return
            self.hand = "Flush"
            self.rank = values[-1]
            return
        
        if self._is_consecutive(values):
            self.hand = "Straight"
            self.rank = values[-1]
            return
        
        for i in c.values():
            if values.count(i) == 4:
                self.hand = "Four of a Kind"
                self.rank = i
                return
                
            if values.count(i) == 3:
                if len(set(values)) == 2:
                    self.hand = "Full House"
                    self.rank = i
                    return
                else:
                    self.hand = "Three of a Kind"
                    self.rank = i
                    return
    
        for i in c.values():
            if values.count(i) == 2:
                for j in c.values():
                    if j == i:
                        continue
                    if values.count(j) == 2:
                        self.hand = "Two Pairs"
                        self.rank = (max(i, j), min(i, j))
                        return
                self.hand = "One Pair"
                self.rank = i
                return
        
        self.rank = values[-1]
    
    def _is_consecutive(self, s):
        if len(set(s)) != 5:
            return False
        if s[-1] - s[0] == 4:
            return True
        return False
    
    def __gt__(self, c):
        if c.hand == self.hand:
            if self.rank == c.rank:
                return list(reversed(self.values)) > list(reversed(c.values))
            return self.rank > c.rank
        return self.order.index(self.hand) > self.order.index(c.hand)
    
    def __eq__(self, c):
        return self.cards == c.cards
    
w = []
with open("54.txt") as f:
    for ln, i in enumerate(f):
        p1 = Hand(i[:14])
        p2 = Hand(i[15:])
        if p1>p2:
            winner = 1
        else:
            winner = 2
        #print(winner)
        print(ln,":",i[:14],"({},{})".format(p1.hand, p1.rank), ",", i[15:].strip(), "({},{})".format(p2.hand, p2.rank), "=>", winner)
        
        w.append(winner)

print(w.count(1))
