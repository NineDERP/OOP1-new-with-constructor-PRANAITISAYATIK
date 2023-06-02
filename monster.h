#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp,potion;
public:

//void Attack(monster &); 
//void print(); // to print all data

monster(string="gobbo", int=0,int=0);
};
monster::monster(string n, int a, int b){
name=n;
hp=a;
potion=b;
  cout<<"Monster "<<name<<" constructed"<<endl;
  cout<<"Hp: "<<a<<" Potion: "<<b<<endl;
  cout<<"---------------------------------"<<endl;
  
};





#endif