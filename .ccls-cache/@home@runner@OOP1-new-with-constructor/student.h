#ifndef monster_h
#define monster_h

class monster{
private:
	string name;
	int hp,potion;
public:

void operator++();
void operator--();
void operator+=(int); // += hp

void Attack(monster &); // A attack B  A.hp--; B.hp/=2 
//void heal(); // your idea to help revive hp
void print(); // to print all data
bool not_dead() { return hp>0;  }

monster(string, int=0,int=0);
monster();
//Alt+126
~monster();

};



#endif