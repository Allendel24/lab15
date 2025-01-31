#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 

void shuffle(int *x,int *y,int *z,int *t){
    int R = rand();
    int a[4] = {*x, *y, *z, *t};
    *x = a[R%4];
    int b[3] = {a[(R+1)%4], a[(R+2)%4], a[(R+3)%4]};
    int R2 = rand();
    *y = b[R2%3];
    int c[2] = {b[(R2+1)%3], b[(R2+2)%3]};
    int R3 = rand();
    *z = c[R3%2];
    *t = c[(R3+1)%2];
    
}