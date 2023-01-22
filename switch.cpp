#include <iostream>

using namespace std;
int toplam=0;
int yakitHarcamalari[12];

int main(){ 	
	
for(int i=0;i<12;i++){
	cout<<i+1<<". ay yakit gideriniz:";
	cin>> yakitHarcamalari[i];
	}
	
	cout<<endl<<"..."<<endl;
	
	for(int j=0;j<12;j++){
		toplam = toplam + yakitHarcamalari[j];
	}
	cout<<"Yakit Harcama Toplami: "<<toplam<<endl;
	
	for(int s=0;s<12;s++)
	{
		cout<<s+1<<" : ";
		for (int i=0;i<(yakitHarcamalari[s]/100);i++)
		{
			cout<<"*";
		}
	 	cout<<endl;	
	}
	return 0;
}
