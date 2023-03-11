#include <iostream>

using namespace std;

// int main( ){
//     int computer = rand() % 3;
//     string computerChoice, you;

//     switch(computer) {
//         case 0:
//         computerChoice = "Scissor";
//         break;
//         case 1:
//         computerChoice = "Rock";
//         break;
//         case 2:
//         computerChoice = "Paper";
//         break;
//     }
//     cout << "Let's play\n";
//     cout << "Scissor-Rock-Paper \n ";
//     cin >> you;

//     cout << "The computer chose " << computerChoice << ".\n";

//     if (you == computerChoice){
//         cout << "Draw" << endl;
//     } else if (
//         you == "Rock"&& computerChoice  == "Scissor" ||
//         you == "Scissor" && computerChoice == "Paper"||
//         you == "Paper" && computerChoice == "Rock") {
//             cout << "You win" << endl;
//         } else {
//             cout << "You lose" << endl;
//         }
//     return 0;
// }

int main(){
    string computerChoice, playerChoice;
    int computer  = rand() % 3;

    cout << "Let's play Scissor-Rock-Paper" << endl;

    switch (computer) {
        case 0:
        computerChoice = "Scissor";
        break;
        case 1: 
        computerChoice = "Rock";
        break;
        case 2:
        computerChoice = "Paper";
        break;
    }

    cout << "Input choice : ";
    cin >> playerChoice;
    cout << "The computer chose " << computerChoice << endl;

    if (playerChoice == computerChoice){
        cout << "Draw" << endl;
    } else if (
        playerChoice == "Rock" && computerChoice == "Scissor" ||
        playerChoice == "Scissor" && computerChoice == "Paper" ||
        playerChoice == "Paper" && computerChoice == "Rock") {
            cout << "You win" << endl;
        } else {
            cout << "You lose" << endl;
        }
        return 0;
}