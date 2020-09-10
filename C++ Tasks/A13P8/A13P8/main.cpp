/*
CH-230-A
a13 p8.[c or cpp or h]
Jose Biehl
j.biehl@jacobs-university.de
*/

#include <iostream>
using namespace std;

class OwnException : public exception{
private:
    string idkifthisiswhatIhavetodo;
public:
  std::string what(){
    return "OwnException\n";
  }
    OwnException(std::string a){
    a = idkifthisiswhatIhavetodo;
      }
};




void createerror(int a){
switch(a){
  case(1):
    throw('a');
  case(2):
    throw(12);
  case(3):
    throw(true);
  default:
    throw OwnException("Default case exception");
  }
}

int main(int argc, const char * argv[]) {
    //0 will throw default exception
    for(int i =0; i < 4; i++){

        try{
            createerror(i);
        }

        catch(char& a){
            cerr<<"Caught in main "<<a<<endl;}
        catch(int& a){
            cerr<<"caught in main "<<a<<endl;}
        catch(bool& a){
            cerr<<"caught in main "<<(a? "true" : "false")<<endl;}
        catch(OwnException& a){
            cerr<<"caught in main "<<a.what()<<endl;}
    }
  return 0;

}
