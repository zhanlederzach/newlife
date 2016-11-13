#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
	int n;
	int a[100];

	for (int i=0; i<100;i++){
		if (a[i]%2==0){
		int x;
		x=a[i]/2;
		n=x;}

		else if(a[i]==1){
			int m;
			m=1;
		}

		else {
		int g;
		g=a[i]*3+1;
		n=g;
		}
		
cin>>n;
cout<<i<<endl;
}

return 0;
}

/*
int f(int x){
		int m;
		m=x/2;
		if(m%2==0)
		return f(m);
		else if (m==1)
		return 1;
		
}

int f2(int y){
		int g;
		g=y*3+1;
		if(g%2==0)
		return f(g);
		else if (g==1)
		return 12;
		else 
		return f2(g);
}
int main(){
	int n;
	cin>>n;
	int s;
	if(s%2==0){
		s=f(n);
	}
	else {
		s=f2(n);
	}
cout<<s<<endl;
return 0;
} */