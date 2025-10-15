#include <iostream>
using namespace std;
class Animal{
    public:
    string name;
    string color;
    int no_of_legs;

    void getno_of_legs(){
    
       if(no_of_legs == 4){
        cout<<name << " have 4 legs" << endl;}
    }
};

    int main(){
        Animal a1;
        a1.name = "lion";
        a1.color = "yellow";
        a1.no_of_legs = 4;

        Animal a2;
        a2.name = "kangaroo";
        a2.color = "brown";
        a2.no_of_legs = 2;

        Animal a3;
        a3.name = "dinosaur";
        a3.color = "green";
        a3.no_of_legs = 2;
        a1.getno_of_legs();
        a2.getno_of_legs();
        a3.getno_of_legs();

    return 0;
}
