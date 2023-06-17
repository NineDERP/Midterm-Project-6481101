#ifndef pets_h
#define pets_h

class pets{
   private: string name;
            int hunger;
   public: 
        int get_hunger(){ return hunger;}
       void set_all(string,int);
       void print_all();
       void operator++();
      void operator--();
      void operator+=(int);
       void print_name();
     // pets(string,int=0);
      pets();
      ~pets();
       
};
void pets::set_all(string n,int h){
  name=n;
  hunger=h;
  
}
void pets::print_all(){
 		cout<<name<<endl;
    cout<<"Fullness: "<<hunger*20<<endl;
  
}
/*pets::pets(string n, int f){
  cout<<"give your pet a name!"<<endl<<"Name: ";
  cin>>n;
  name=n;
  cout<<name<<" is ready for some food!!"<<endl;
}*/

pets::~pets(){
  cout<<name<<" has gratuated!"<<endl;
}

pets::pets(){
  cout<<"give your pet a name!"<<endl<<"Name: ";
  cin>>name;
  hunger=0;
  cout<<name<<" is ready for some food!!"<<endl;
}

void pets::operator++(){
  hunger++;
}

void pets::print_name(){
cout<<name;
  
}
#endif