#include<iostream>
using namespace std;
int main(){
	        int a,b,c,d;
	        cout<<"Enter Three Number:";
	        cin>>a>>b>>c;
	        d=a+b+c;
	         cout<<"Sum is:"<<d<<endl;
	         d=a*b*c;
	         cout<<"Product is:"<<d<<endl;
	        
			  if(a >= b && a >= c)
    {
        cout << "Largest is: " << a;
    }
    if(b >= a && b >= c)
    {
        cout << "Largest is: " << b;
    }
    if(c >= a && c >= b) {
        cout << "Largest is: " << c<<endl;
	         

}
  if(a<=b &&a<=c)
  { 
  cout<<"Smallest is:"<<a;

  }
   if(b<=a && b<=c)
   { 
   cout<<"smallest is:"<<b;
   }
   if(c<=a&& c<=b){
   	cout<<"smallest is"<<c;
   }










	return 0;
}
