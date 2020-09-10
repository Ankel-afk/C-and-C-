/*
CH-230-A
a12 p4.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#ifndef TournamentMember_h
#define TournamentMember_h
#include <cstring>
#include <iostream>
class Tournamentmember{
private:
    char firstname[36];
    char lastname[36];
    char birthday[11];
    static char location[36];
    double height;
    int age;
public:
    Tournamentmember(char f[], char l[], char bd[], double h, int a);
    //default constructor
    Tournamentmember();
    //copy constructor
    Tournamentmember(const Tournamentmember&);
    ~Tournamentmember();
    void printInfo();
    void setLocation( char loc[]);
    
    //setters and getters
    inline void setFirstname(char fn[]);
    inline void setLastname(char ln[]);
    inline void setBirthday(char bd[11]);
    inline void setHeight(double h);
    inline void setAge(int a);
    inline char* getFirstname();
    inline char* getLastname();
    inline char* getBirthday();
    inline char* getLocation();
    inline double getHeight();
    inline int getAge();
};

/*A Player class should be derived from the TournamentMember class. It holds additional properties such as number, position, number of goals scored, and whether the player is left-footed or
right-footed. For each property appropriate setter (except the number of goals scored) and getter
methods need to be provided as inline methods, and it should not be possible to manipulate data
directly. An appropriate constructor to set all properties on creation should be provided as well
as a copy constructor that creates a correct copy of a player, and a destructor. Also all constructors and the destructor should print a short informational message on the screen such that you
can see which is being called when.
Also the following methods are required:
• a method which prints all the information of a player on the screen,
• a method which increments the number of goals scored by a player*/


class Player : public Tournamentmember{
private:
    int number;
    std::string position;
    int goals;
    std::string footed;
public:
    Player(char f[], char l[], char bd[], double h, int a, int n, std::string pos, int g, std::string foot);
   //(char f[], char l[], char bd[], double h, int a)
    Player(const Player&);
    ~Player();
    Player();
    void setNumber(int n);
    void setGoals(int g);
    void SCORE();
    void setPosition(std::string p);
    void setFooted(std::string f);
    void playerInfo();
    int getNumber();
    int getGoals();
    std::string getPosition();
    std::string getFooted();
    
};

/*Write a class named Referee derived from the TournamentMember class. This class should
have the following additional properties:
• int yellowCardCount;
• Player ∗yellowCardList[40];
• int redCardCount;
• Player ∗redCardList[40];
And the following methods should be implemented:
• bool addToYellowCardList(Player ∗p);
• bool addToRedCardList(Player ∗p);
If the player p is not yet on the yellow card list then it should be added to it, but if the player p is
already on the yellow card list then the player should be removed from the yellow card list and
should be added to the red card list. If the player p is not yet on the red card list then it should be
added to it, but if the player p is already on the red card list then nothing should happen. Both
methods should return true if the adding was successful and false if not.
Add code to the files TournamentMember.h, TournamentMember.cpp, and write a testing
program named testReferee.cpp that tests the functionality of the Referee class. Create a
referee and some players. Your code should illustrate the referee actions for adding players to
the list of players with yellow cards and to the list of players with red cards.
You can assume that the input or the setting of the data will be valid.*/
class Referee : public Tournamentmember{
private:
    int yellowCardCount;
    int redCardCount;
    Player* yellowCardList[40];
    Player* redCardList[40];
public:
    bool addToYellowCardList(Player *p);
    bool addToRedCardList(Player *p);
    Referee();
    //destructor doesn't have to delete arrays
    ~Referee();
   void Printyellow();
};

#endif /* Tournamentmember_h */
