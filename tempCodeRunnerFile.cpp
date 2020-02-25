#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &, int &, int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}

	return 0;
}

void shuffle(int &a,int &b,int &c,int &d){
	int v[] = {a,b,c,d};
	int g,h ;
	
	for(int i=0;i<10;i++){
		g = rand()%4 ;
		h = rand()%4 ;
		swap(v[g],v[h]);
	}	
	
	a = v[0];
	b = v[1];
	c = v[2];
	d = v[3];
	
}
