#include <iostream>
#include <string.h>

using namespace std;


class animals
{
	string species;
	string scientific_name;
	int age,weight,size;
	int meals;
	string diet;
	string meals_time;
	string bath_time;
	string sleep_time;
	bool danger(int a);
	bool health(int a);
	void health_stat();
};

bool animals::health(int a)
{
	if(a==1)
		return true;
	
	if(a==0)
		return false;
}

bool animals::danger(int a)
{
	if(a==1)
		return true;
	
	if(a==0)
		return false;
}


class mammals
{
	animals a;
	void wash_a_mammal();
	void feed_a_mammal();
};

class reptiles
{
	animals b;
	void clean_a_reptile();
	void feed_a_reptile();
};

class birds
{
	animals c;
	void clean_a_bird();
	void feed_a_bird();	
};

class daily_revenue
{
	int total;
	
	daily_revenue(int money)
	{
		total+=money;
	}
};

void animals::health_stat()
{
	int healthy=0;
	int ill=0;
	int a;
	if(this->health(a)==true)
		healthy+=1;
	if(this->health(a)==false)
		ill+=1;
	return;
};

class feedback
{
	string comments;
	string suggestions;
	
};


int main(void)
{
	return 0;
}
