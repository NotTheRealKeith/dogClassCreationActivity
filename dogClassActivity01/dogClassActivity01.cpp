// dogClassActivity01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Dog {
private:
    string name;
    int age;
    string race;
public:
    //----------    CONSTRUCTOR    ----------
    Dog(string dogName = " ", int dogAge = 0, string dogRace = " ") {
        name = dogName;
        age = dogAge;
        race = dogRace;
    }
    //---------------------------------------

    //----------    SETTER  FUNCTION    ----------
    void setDetails(string dN, string dR, int dA) {
        name = dN;
        race = dR;
        age = dA;
    }
    //--------------------------------------------

    //----------    GETTER  FUNCTION    ----------
    string getName(){
        return name;
    }
    string getRace(){
        return race;
    }
    int getAge(){
        return age;
    }
    //--------------------------------------------
};

int main()
{
    // Objects
    Dog dogObj;
    //--------

    // Variables
    string nameInput;
    string raceInput;
    int ageInput;
    //----------

    cout << "\n\t|----------------------|" << endl;
    cout << "\t|     Dog Program!     |" << endl;
    cout << "\t|----------------------|" << endl;

    cout << "\n\t| Please enter your dogs name: ";
    cin >> nameInput;
    cout << "\t| Please enter your dogs race: ";
    cin >> raceInput;
    cout << "\t| Please enter your dogs age: ";
    cin >> ageInput;

    // setting user input into the private members
    dogObj.setDetails(nameInput, raceInput, ageInput);
    //--------------------------------------------

    // getting data from privated members
    cout << "\n\n\t|   Your dogs name: " << dogObj.getName() << endl;
    cout << "\t|   Your dogs race: " << dogObj.getRace() << endl;
    cout << "\t|   Your dogs age: " << dogObj.getAge() << endl;
    //-----------------------------------
}

