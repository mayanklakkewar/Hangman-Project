#include <iostream>
#include <vector>
#include "hangman_functions.h"
using namespace std;

void greet(){
    cout << "=======================\n";
    cout << "Welcome to Hangman!\n";
    cout << "=======================\n";
    cout << "Instructions: Save your friend from being hanged by guessing the letters in the codeword.\n";
}

void display_misses(int misses){
    if(misses == 0){
        cout<<"  +---+ \n";
        cout<<"  |   | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<" ========= \n";
        
    }
    else if(misses == 1){
         cout<<"  +---+ \n";
        cout<<"  |   | \n";
        cout<<"  O   | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<" ========= \n";

        cout << "\n Hint 1: It is a type of fruit.\n\n\n" ;
    }
    else if(misses == 2){
        cout<<"  +---+ \n";
        cout<<"  |   | \n";
        cout<<"  O   | \n";
        cout<<"  |   | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<" ========= \n";

        cout << "\n Hint 2: This fruit is often associated with summer.\n\n\n" ;
        
    }
    else if(misses == 3){
        cout<<"  +---+ \n";
        cout<<"  |   | \n";
        cout<<"  O   | \n";
        cout<<" /|   | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<" ========= \n";

        cout << "\n Hint 3: This fruit is typically red on the inside and has black seeds.\n\n\n" ;

    }
    else if(misses == 4){
        cout<<"  +---+ \n";
        cout<<"  |   | \n";
        cout<<"  O   | \n";
        cout<<" /|\\  | \n";
        cout<<"      | \n";
        cout<<"      | \n";
        cout<<" ========= \n";

        cout << "\n Hint 4: The fruit has a green rind.\n\n\n";

    }
    else if(misses == 5){
        cout<<"  +---+ \n";
        cout<<"  |   | \n";
        cout<<"  O   | \n";
        cout<<" /|\\  | \n";
        cout<<" /    | \n";
        cout<<"      | \n";
        cout<<" ========= \n";

        cout << "\n Hint 5: This fruit is often eaten in slices and is popular at picnics.\n\n\n";

    }
    else if(misses == 6){
        cout<<"  +---+ \n";
        cout<<"  |   | \n";
        cout<<"  O   | \n";
        cout<<" /|\\  | \n";
        cout<<" / \\  | \n"; //escape sequesnce issues compiler gets confuse and gives warrings
        cout<<"      | \n";
        cout<<" ========= \n";

    }
}


void display_status(vector<char> incorrect, string answer){
    cout<<"Incorrect guesses: " << endl;

    for(int i=0; i<incorrect.size();i++){
        cout<<incorrect[i]<<" ";
    }
    cout << "\nCodeword:\n";

    for(int i=0; i<=answer.length(); i++){
        cout << answer[i] << " "; 
    }
}


void end_game(string answer,string codeword){
    if(answer == codeword){
        cout << "Hooray! You saved a person from being hanged and earned a medal of honoe!";
        cout << "\nCongratulations!\n";
    }
    else{
        cout << "Oh no! The man is hanged!\n";
    }
}