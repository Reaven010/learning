import random
# blackjack.py
cards =['ace','two','three','four','five','six','seven','eight','nine','ten','jack','queen','king']
suits = ['hearts', 'diamonds', 'clubs', 'spades']
def calculate_score(hand):
    score = 0
    ace_count = 0
    for card in hand:
        if card.startswith('ace'):
            score += 11
            ace_count += 1
        elif card.startswith('two'):
            score += 2
        elif card.startswith('three'):
            score += 3
        elif card.startswith('four'):
            score += 4
        elif card.startswith('five'):
            score += 5
        elif card.startswith('six'):
            score += 6
        elif card.startswith('seven'):
            score += 7
        elif card.startswith('eight'):
            score += 8
        elif card.startswith('nine'):
            score += 9
        else:
            score += 10

    while score > 21 and ace_count > 0:
        score -= 10
        ace_count -= 1

    return score
deck =[]

def shuffel_deck(deck):
    for suit in suits:
        for card in cards:
            deck.append(card + ' of ' + suit)
    random.shuffle(deck)
    return deck
def deal_card(deck):
    card = deck.pop()
    return card
main_deck =shuffel_deck(deck)
play_again = True
while (play_again):
    player_hand,player_score =[],0
    dealer_hand,dealer_score=[],0
    player_hand.append(deal_card(main_deck))
    player_hand.append(deal_card(main_deck))
    dealer_hand.append(deal_card(main_deck))
    dealer_hand.append(deal_card(main_deck))
    print("Your hand: ", player_hand)
    print("Dealer's hand: ", dealer_hand[0], " and a hidden card")
    player_score = calculate_score(player_hand)
    dealer_score = calculate_score(dealer_hand)
    while player_score < 21:
        print("dealer score is : ",dealer_score)
        print("player score is : ",player_score)
        if player_score == 21:
            print("Blackjack! You win!")
            break
        action = input("Do you want to hit or stand? (h/s): ")
        if action == 'h':
            player_hand.append(deal_card(main_deck))
            print("Your hand: ", player_hand)
            player_score = calculate_score(player_hand)
            if player_score > 21:
                print("You busted! Dealer wins.")
                break
        elif action == 's':
            break
        else:
            print("Invalid input. Please enter 'h' or 's'.")
    while dealer_score<=17:
        if dealer_score>player_score and dealer_score<=21:
            print("Dealer wins")
            break
        dealer_hand.append(deal_card(main_deck))
        dealer_score = calculate_score(dealer_hand)
        print("Dealer's hand: ", dealer_hand)
    if player_score <= 21:
        if dealer_score > 21:
            print("Dealer busted! You win!")
        elif player_score > dealer_score:
            print("You win!")
        elif player_score < dealer_score:
            print("Dealer wins!")
        else:
            print("It's a tie!")
    play_again = input("Do you want to play again? (y/n): ")
    if play_again.lower() == 'y':
        play_again = True
    else:
        play_again = False
