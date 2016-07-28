#include <queue>

using namespace std;

// Suits
typedef enum {
  spades = 0,
  hearts = 1,
  diamonds = 2,
  clubs = 3,
} Suit;

int ace = 1;
int king = 11;
int queen = 12;
int jack = 13;

struct Card {
  Suit suit;
  int number;
};

class Deck {
public:
  // These methods and fields are available for other code to use

  // Deck() is the constructor for the Deck class
  // Whenever a variable of type Deck is declared, the constructor is run
  Deck() {
    Card curr;
    // Add the each suit of cards to the cards queue
    for (int suit = 0; suit < 4; suit++) {
      for (int num = 1; num <= 14; num++) {
        curr = {
            (Suit)suit, // Suit (Casted to a type suit)
            num,        // Number
        };
        cards.push(curr);
      }
    }
  }

  // Shuffle() randomly shuffles the cards in the deck
  void Shuffle() {
    // TODO: Your code here
  }

  // Draw() returns the next card in the deck and removes it from the deck
  Card Draw() {
    Card card = {};

    // TODO: Your code here

    return card;
  }

private:
  // These methods and fields are only available within this class

  // This is a first in, first out queue. What goes in, comes out in the same
  // order. We'll use this to store and retrieve the deck
  queue<Card> cards;
};

class Hand {
  // TODO: Your code here
};
