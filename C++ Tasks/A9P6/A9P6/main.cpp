/*
CH-230-A
a9 p6.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/
 # include <iostream>
 # include <cstdlib>
 # include <ctime>
using namespace std ;
int main () {
    int guess ;
    int count = 0;
    int randomNumber ;
    int usefulrandomnumber;
    // init random number generator
    srand ( static_cast < unsigned int >( time (0) ) );
    randomNumber = rand () ;
    bool win = false;
    usefulrandomnumber = ( randomNumber % 100) + 1;
    while ( count < 10 && win == false) {
        cin>>guess;
        count ++;
        if (guess == usefulrandomnumber){
            cout<<"Congratulations, you guessed correctly!"<<endl;
            win = true;
        }
        else if( guess > usefulrandomnumber)
            cout<<"Too high" << endl;
        else{
            cout<<"Too low"<< endl;
        }

}
    if (win == false )
               cout<<"You lose!"<<endl;
return 0;
}
