#ifndef pets_h
#define pets_h
#include <iostream>
using namespace std;

class pets{
   private: string name;
            int hunger;
   public: 
        int get_hunger(){ return hunger;}
       void set_all(string,int);
       void print_all();
      pets(string,int=0);
      ~pets();
       
};
void pets::set_all(string n,int h){
  name=n;
  hunger=h;
  
}
void pets::print_all(){
 		cout<<"Name: "<<name<<endl;
    cout<<"Fullness: "<<hunger*20<<endl;
  
}

#endif