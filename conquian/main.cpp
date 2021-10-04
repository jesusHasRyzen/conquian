//
//  main.cpp
//  conquian
//
//  Created by Jesus Ponce on 10/3/21.
//

#include <iostream>

//Focus on 4 aspects of the program
//1. Settings
    //  level of computer intelligence
    //      easy or hard
    //  volume control
    //      a meter to pick on or off
    //  number of cards to start play
    //      start game with 8 or 9 cards
    //      if 9 max 3 players or 8 max 4 players
//2. Instructions
    //    game begins with a 40 card deck
    //    number of players varies from 2 to 4.
    //    9 cards are dealt to the players, 8 if the
    //    number of players is 4.
    //    first move by all the players is to pass
    //    one card, any card by players card in
    //    thier hand to pass to the player to the
    //    right. the card is passed faced down.
    //    Then the player who was dealt the first
    //    card must draw a card. if he can
    //    make
    //    a valid set, eg(JD, JS, JH) or sequence     (1D, 2D, 3D). The player must lay the       cards for other players to see. Else,       discard the card, and now that card goes    in order to the next player to the right,   if the choose to create a valid set or      sequence with said card.
    //    if any player plays set card, they must
    //    discard a card or have won the game.
//3. Play
    //dealer functions
        //create deck of cards
        //    option of having face cards or not
        //shuffle deck
        //deal cards
        //    either 8 or 9 card game with number of players
    //player functions
        //see cards
        //discard card
        //draw card
        //create set or sequence with drawn card
        //create set or sequence with discarded card
        //switch card
        //put down cards - won
//4. Purpose/Author
    //The purpose of this application/ game is to introduce the world to a game I am very familiar with. A game that before googling it, I thought it to be unique to Latin America since I had not see other people play it. Apparently, the US, it is called rummy, I find it to be a very interesting game, and its a game that my family plays often in get togethers because it helps us bond and interact in a way out of the ordinary, which generally means saying hi and bye. It is played with a deck of 40 cards. This game was introduced to us by our Grandma, who used to play it with her friends to blow off steam after working long hours in the small clinic of our small town in Nayarit Mexico. The game was passed down generation to generation, as my mother and all her siblings play it, as well as my sibling and cousins do. Now the next generation of my family has slowly been introduced to playing this game.






int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
