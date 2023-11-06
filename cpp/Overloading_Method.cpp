#include <iostream>

using namespace std;

class calculator{ 

public: 

  float mul(double a,int b){ 

return a*b; 

    };  

 int mul(int a,int b){ 

return a*b; 

 
 }}; 

int main(){ 

calculator calc; 

cout<<"THE INT VALUE : "<<calc.mul(10,2)<<endl; 

cout<<"THE FLOAT VALUE :"<<calc.mul(0.2,10);

return 0;

} 
