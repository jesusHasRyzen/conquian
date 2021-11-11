export default class Deck{
    constructor(){
        //create the 40 card deck
        this.deck = [];
        //reset the deck to have 40 cards again for a new game 
        this.newDeck();
        //shuffle the deck after it is reset to begin a new game
        this.shuffle();
    }

    newDeck(){
        this.deck = [];
        const suits = ["diamonds", "spades", "hearts", "clubs"];
        const values = ['Ace', 2, 3 , 4, 5, 6, 7, 'jack', 'queen', 'king'];

        for (let suit in suits){
            for (let value in values){
                this.deck.push(values[value] + " of " + suits[suit]);
            }
        }
       
    }
    shuffle(){
        this.deck.sort((a,b) => Math.random() - .5)
    }
}
class Card {
    constructor(suit, value){
        this.suit = suit 
        this.value = value
    }
}