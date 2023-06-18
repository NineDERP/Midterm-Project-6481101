#ifndef pets_h
#define pets_h

class pets{
   private: string name;
            int hunger;
   public: 
        int get_hunger(){ return hunger;}
       void operator++();
       void print_name();
     // pets(string,int=0);
      pets();
      ~pets();
       
};

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