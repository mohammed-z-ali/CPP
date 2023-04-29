// there is no difference except one, which is we write struct instead of class.
// with struct, everything is accessble. there is nothing private except we explicitely define it.


// the code as follows

#include <iostream>
using namespace std;
#include <string>

struct Player{ // everything is accessible because it is not a class. 

    private:
    string name;
    int score;

    public:
    void player_info(string n, int s){
        name = n;
        score = s;
    }

    void display(){
        cout << "Name: " << name << ", Score: " << score << endl;
    }
};


int main(){

    Player player1; 
    player1.player_info("Milu", 20);

    Player player2;
    player2.player_info("Tanzil", 10);

    // display the result
    player1.display();
    player2.display();
    return 0;
}