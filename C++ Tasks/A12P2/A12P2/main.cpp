 /*
 CH-230-A
 a12 p4.[c or cpp or h]
 Jose Biehl
 j.biehl@jacobs-university.de
 */
#include "TournamentMember.h"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    Player sadness;
    Player lebandowski;
    Player thiccyberg, YoshikageKira, Jotaro;
    
    sadness.playerInfo();
    char a[36] = "Class";
    char b[36] = "Clown";
    char c[11] ="2000-04-20";
    
    Player tedium(a,b,c, 1.69, 19, 10, "Striker", 0, "left");
    
    tedium.printInfo();
    Player cpy(tedium);
    cpy.printInfo();
    char lc[36] = "Hamburg";
    //we changed the location for all objects
    tedium.setLocation(lc);
    tedium.playerInfo();
    sadness.playerInfo();
    cpy.playerInfo();
    Referee BigLebowski;
    //tedium player is now in the yellow card list, should return a 1;
    cout<<BigLebowski.addToYellowCardList(&tedium)<<endl;
    //this should now return a 0
    cout<<BigLebowski.addToYellowCardList(&tedium)<<endl;
    //now this should return 0 because he's already in the red card list
    cout<<BigLebowski.addToRedCardList(&tedium)<<endl;
    
    //this should return 1, since sadness is not yet in the red card list
    cout<<BigLebowski.addToRedCardList(&sadness)<<endl;
    //just to make sure it works
    BigLebowski.addToYellowCardList(&YoshikageKira);
    BigLebowski.addToYellowCardList(&Jotaro);
    
    BigLebowski.Printyellow();
    
    
    
    
    
    return 0;
    
    
}
