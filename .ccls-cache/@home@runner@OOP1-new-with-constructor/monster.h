#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp,potion;
public:

void Attack(monster &); 
void print(); // to print all data

monster(string, int=0,int=0);


};



#endif