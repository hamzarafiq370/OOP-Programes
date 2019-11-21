#include<iostream>
using namespace std;
 int main(){
 	       int a,b,c,d,e,f;
 	       cout<<"Enter Six Number:";
 	       cin>>a>>b>>c>>d>>e>>f;
 	       if(a<=b && a<=c&&a<=d &&a<=e&&a<=f){
			
 	       cout<<"Smallest  Number is:"<<a<<endl;
}
 if(c<=a && c<=b&&c<=d &&c<=e&&c<=f){
			
 	       cout<<"Smallest  Number is:"<<c<<endl;
}
 if(b<=a && b<=c&&b<=d &&b<=e&&b<=f){
			
 	       cout<<"Smallest  Number is:"<<b<<endl;
}
 if(d<=a && d<=b&&d<=c &&d<=e&&d<=f){
			
 	       cout<<"Smallest  Number is:"<<d<<endl;
}
 if(f<=b && f<=c&&f<=d &&f<=e&&f<=a){
			
 	       cout<<"Smallest  Number is:"<<f<<endl;
}
 if(e<=b && e<=c&&e<=d &&e<=a&&e<=f){
			
 	       cout<<"Smallest Number is:"<<e<<endl;
 	    
}
 	       if(a>=b && a>=c&&a>=d &&a>=e&&a>=f){
			
 	       cout<<"Largest  Number is:"<<a<<endl;
}
 if(c>=a && c>=b&&c>=d &&c>=e&&c>=f){
			  cout<<"Largest   Number is:"<<c<<endl;
}
 if(b>=a && b>=c&&b>=d &&b>=e&&b>=f){
			
 	       cout<<"Largest   Number is:"<<b<<endl;
}
 if(d>=a && d>=b&&d>=c &&d>=e&&d>=f){
			
 	       cout<<"Largest   Number is:"<<d<<endl;
}
 if(f>=b && f>=c&&f>=d &&f>=e&&f>=a){
			
 	       cout<<"Largest   Number is:"<<f<<endl;
}
 if(e>=b && e>=c&&e>=d &&e>=a&&e>=f){
			
 	       cout<<"Largest  Number is:"<<e<<endl;
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 	return 0;
 }
