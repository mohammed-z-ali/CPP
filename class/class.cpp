// class is just a way to group data or funtionallity together.
// it is just to make to code nicer
// use the class multiple times without creating new variable or functions to everywehere

// by default, the class makes everything private.


// -------
 /* 
 we have to start using the keyword class      so that the complier understand this is a class.
 classes are type. 

 we have to use as follows
 class x {
        // codes
 };         ends with a semicolon

 */




#include <iostream>
using namespace std;
#include <string>


    // ----- without creating a class, theis is what we might have to do if we are making a gaming app where there are more than two players.
    /* 
    string player1_name = "Milu";
    int player1_score = 10;

    string player2_name = "Faisal";
    int player2_score = 5;
    */

    // ----- but if we have a class, we don't have to do those. we can simply do this as follows.

class Player{ // the members cannot be accessed anywhere outside of the class because of the VISIBILITY. to make this accessible, this is what we have to do.
public: // we have to make it to publio with colon.
    string name;
    int score;

    void player_info(string n, int s){
        name = n;
        score = s;
    }
};


// void player_info(Player& player, string n, int s){
//     /*
//     to make the members of the class accessible and modifiable, we have to make reference of the class.
//     wehre we Player& player     the player is an instance of the Player object, which makes the members to be accessible and modifiable.
//     */

//     player.name = n;
//     player.score = s;
// }  // we can also shift this inside the class so that don't have to use the instance anymore. 


int main(){

    Player player;  // Player is an OBJECT. player is INSTANCE, where we instantiate player is an instance of Player object.
    // player.name = "Milu";
    // player.score = 20    
    // ------ we don't have to do this anymore. we can just simply call the method using this line

    player.player_info("Milu", 20);

}

