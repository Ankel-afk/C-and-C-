/*
CH-230-A
a12 p4.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#include "TournamentMember.h"
#include <iostream>

using namespace std;
char Tournamentmember::location[36] = "my pain and suffering";
Tournamentmember::Tournamentmember(char f[], char l[], char bd[], double h, int a){
    std::cout<<"making an actual member . . . \n";
    strncpy(firstname, f, 36);
    strncpy(lastname, l, 36);
    strncpy(birthday, bd, 11);
    height = h;
    age = a;
}
Tournamentmember::Tournamentmember(){
    std::cout<<"making a default member . . .\n";
    strcpy(firstname, "default");
    strcpy(lastname, "default");
    strncpy(birthday, "0000-00-00", 11);
    age = 0;
    height = 0;
}
Tournamentmember::Tournamentmember(const Tournamentmember& cpy){
    std::cout<<"copying another member . . .\n";
    strcpy(firstname, cpy.firstname);
    strcpy(lastname, cpy.lastname);
    strncpy(birthday, cpy.birthday, 11);
    height = cpy.height;
    age = cpy.age;
}
Tournamentmember::~Tournamentmember(){
    std::cout<<"Tournamentmember was deleted\n";
}
void Tournamentmember::printInfo(){
    std::cout<<"first name: "<<firstname<< "\n lastname: "<<lastname<<std::endl;
    std::cout<<"birthday: "<<birthday<<" height: "<<height<<" age: "<<age<<std::endl;
    std::cout<<"location: "<<location<<"\n";
}
void Tournamentmember::setLocation( char loc[]){
    for (int i = 0; loc[i] != '\n';i++){
        location[i] = loc[i];
    }
    
}
//setters and getters
inline void Tournamentmember::setFirstname(char fn[]){
    strncpy(firstname, fn, 36);
}
inline void Tournamentmember::setLastname(char ln[]){
    strncpy(lastname, ln, 36);
}
inline void Tournamentmember::setBirthday(char bd[11]){
    strncpy(birthday, bd, 11);
}
inline void Tournamentmember::setHeight(double h){
    height = h;
}
inline void Tournamentmember::setAge(int a){
    age = a;
}
inline char* Tournamentmember::getFirstname(){
    char* ptr = new char[36];
    strcpy(ptr, firstname);
    return ptr;
}
inline char* Tournamentmember::getLastname(){
    char* ptr = new char[36];
        strcpy(ptr, lastname);
    return ptr;
}
inline char* Tournamentmember::getBirthday(){
    char* ptr = new char[36];
        strcpy(ptr, birthday);
    return ptr;
}
inline char* Tournamentmember::getLocation(){
    char* ptr = new char[36];
        strcpy(ptr, location);
    return ptr;
}
inline double Tournamentmember::getHeight(){
    return height;
}
inline int Tournamentmember::getAge(){
    return age;
}
Player::Player(char f[], char l[], char bd[], double h, int a, int n, std::string pos, int g, std::string foot) : Tournamentmember( f, l, bd, h, a){
    cout<<"Creating a new player!\n";
    number = n;
    position = pos;
    goals = g;
    footed = foot;
    //(char f[], char l[], char bd[], double h, int a)
}



Player::Player(const Player& src) : Tournamentmember(src){
    cout<<"player copied!"<<endl;
    number = src.number;
    position = src.position;
    goals = src.goals;
    footed = src.footed;
}
Player::~Player(){
    cout<<"player destroyed\n";
}
void Player::setNumber(int n){
    number = n;
}

Player::Player() : Tournamentmember(){
    number = 0;
    position = "default position";
    goals = 0;
    footed = "right";
}
    
void Player::setGoals(int g){
    goals = g;
}
void Player::setPosition(std::string p){
    position = p;
}
void Player::setFooted(std::string f){
    footed = f;
}
void Player::playerInfo(){
    printInfo();
    cout<<"number: "<<number<<"\n position: "<< position<<endl;
    cout<<"goals: "<<goals<<"\n"<<footed<<"footed"<<endl;
}
inline int Player::getNumber(){
    return number;
}
inline int Player::getGoals(){
    return goals;
}
inline  std::string Player::getPosition(){
    return position;
}
inline std::string Player::getFooted(){
    return footed;
}
inline void Player::SCORE(){
    goals += 1;
}
/*  int yellowCardCount;
  int redCardCount;
  Player* yellowCardList[40];
  Player* redCardList[40];*/
Referee::Referee(){
    yellowCardCount = 0;
    redCardCount = 0;
}
Referee::~Referee(){
    
}
bool Referee::addToYellowCardList(Player *p){
    for(int i = 0; i < yellowCardCount; i++){
        if (yellowCardList[i] == p){
            cout<<"player already in yellow card list!";
            
            addToRedCardList(p);
            //copy the whole list again to overwrite the value we want ot delete
            yellowCardCount--;
            for (int j = i; j < yellowCardCount; j++){
                yellowCardList[j] = yellowCardList[j+1];
            }
            return false;
        }
    }
    //computers count from 0 so this is okay
    yellowCardList[yellowCardCount] = p;
    yellowCardCount++;
    return true;
    
}
bool Referee::addToRedCardList(Player *p){
    for(int i =0; i < redCardCount; i++){
        if (redCardList[i] == p){
            return false;
        }
    }
    redCardList[redCardCount] = p;
    redCardCount++;
    return true;
}
void Referee::Printyellow(){
    cout<<"============================\n\n";
    cout<<"printing info of players with a yellow card\n";
    for (int i = 0; i < yellowCardCount; i++){
        yellowCardList[i]->playerInfo();
    }
}
