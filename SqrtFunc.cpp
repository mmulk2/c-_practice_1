#include<iostream>
#include<math.h>
using namespace std;

float sqrt(int x){
	double result = 0.0;
	if (x == 0)
		return 0;
	else if (x < 0)
		return -1;
	else {
		for (float i = 1.0; i <= 100; i++){
			for (float j=1.0; j <= 100; j++){
					//cout << "       " << j << "            " << i << "           " << endl;
					if ( (float)(pow(j,2)/pow(i,2)) == x)
						return (float) (j/i);
					else
						return -1;
			}
		}
	}
}

int main(){
	float input = 0.0;
	float result = 0.0;
	cout << "Please input the number you want to see the square off: " ;
	cin >> input;
	result = sqrt(input);
	cout << endl;
	cout << "Square Root of " << input << " is " << result << endl;
}