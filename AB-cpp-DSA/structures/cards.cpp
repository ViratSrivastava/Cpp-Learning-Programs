#include <iostream>
using namespace std;

struct Card{
    int value; // 1: Ace, 2-10: Number cards, 11: Jack, 12: Queen, 13: King
    int suit;  // 0: Spades, 1: Hearts, 2: Diamonds, 3: Clubs

    int getValue() {
        if (value == 1) {
            cout << "Ace" << endl;
            return 1;
        } else if (value >= 2 && value <= 10) {
            return value;
        } else if (value == 11) {
            cout << "Jack" << endl;
            return 11;
        } else if (value == 12) {
            cout << "Queen" << endl;
            return 12;
        } else if (value == 13) {
            cout << "King" << endl;
            return 13;
        }
        return -1; // Invalid value
    }

    int getColor() {
        if (suit == 0 || suit == 3) {
            return 0; // Black
        } else if (suit == 1 || suit == 2) {
            return 1; // Red
        }
        return -1; // Invalid suit
    }
    void printCard() {
        cout << "Card: ";
        if (value == 1) {
            cout << "Ace of ";
        } else if (value >= 2 && value <= 10) {
            cout << value << " of ";
        } else if (value == 11) {
            cout << "Jack of ";
        } else if (value == 12) {
            cout << "Queen of ";
        } else if (value == 13) {
            cout << "King of ";
        }

        switch (suit) {
            case 0: cout << "Spades"; break;
            case 1: cout << "Hearts"; break;
            case 2: cout << "Diamonds"; break;
            case 3: cout << "Clubs"; break;
            default: cout << "Unknown Suit"; break;
        }
        if(value == 13){
            cout << endl;
            cout <<"----------------------------" << endl;
        }
        cout << endl;
    }
};
int main(){
    Card deck[52];
    for (int i = 0; i < 52; i++) {
        deck[i].value = i % 13 + 1; // Card values from 1 to 13
        deck[i].suit = i / 13;      // Suit values from 0 to 3
    }
    for(int i = 0; i < 52; i++){
        deck[i].printCard();
    }
    return 0;
}