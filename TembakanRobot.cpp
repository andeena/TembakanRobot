// NAMA     : Andina Safitri Innayah
// NRP      : 5025221204
// JURUSAN  : Teknik Informatika

#include<iostream>
#include<cmath>

using namespace std;

int main() {
    int V0,x,losses;
    float vtan;

    cin >> V0;
    if (V0 >= 1 && V0 <= 10) {
  		V0 = V0-1;
        losses = 1;
	  }
	else if (V0 >= 11 && V0 <=20) {
	  	V0 = V0-3;
        losses = 3;
	  }
	else {
	  	V0 = V0-5;
        losses = 5;
	  }

    x = pow(V0,2)*sin(90*3.1415/180)/10;
    vtan = sqrt(x*10/sin(90*3.1415/180))+losses;
    cout<<x<<" "<<vtan<<endl;
    return 0;
}
