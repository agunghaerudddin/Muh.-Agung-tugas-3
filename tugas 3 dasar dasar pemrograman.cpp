//operasi AND dan OR
#include <iostream>
using namespace std;
int main(){
	cout<<"Nama:Muh. Agung Haeruddin" <<endl;
	cout<<"NIM :1829040023"<<endl; 
	cout<<"        operator logika 'AND' dan 'OR'            "<<endl;
	cout<<"+=====================================================+"<<endl;
	cout<<"|A|B|C|  A OR B  |   A OR C  |F1=(A OR B) AND (A OR C)|"<<endl;
	cout<<"|=|=|=|==========|===========|========================|"<<endl;
	cout<<"|0|0|0|"<<"0 OR 0 ="<<(0||0)<<" |"<< " 0 OR 0 ="<<(0||0)<<" |"<<" 0 OR 0 AND 0 OR 0 =  "<<(0 || 0 && 0 || 0)<<" |"<<endl;
	cout<<"|0|0|1|"<<"0 OR 0 ="<<(0||0)<<" |"<< " 0 OR 1 ="<<(0||1)<<" |"<<" 0 OR 1 AND 0 OR 1 =  "<<(0 || 0 && 0 || 1)<<" |"<<endl;
	cout<<"|0|1|0|"<<"0 OR 1 ="<<(0||1)<<" |"<< " 0 OR 0 ="<<(0||0)<<" |"<<" 0 OR 0 AND 0 OR 0 =  "<<(0 || 1 && 0 || 0)<<" |"<<endl;
	cout<<"|0|1|1|"<<"0 OR 1 ="<<(0||1)<<" |"<< " 0 OR 1 ="<<(0||1)<<" |"<<" 0 OR 1 AND 0 OR 1 =  "<<(0 || 1 && 0 || 1)<<" |"<<endl;
	cout<<"|1|0|0|"<<"1 OR 0 ="<<(1||0)<<" |"<< " 1 OR 0 ="<<(1||0)<<" |"<<" 1 OR 0 AND 1 OR 0 =  "<<(1 || 0 && 1 || 0)<<" |"<<endl;
	cout<<"|1|0|1|"<<"1 OR 0 ="<<(1||0)<<" |"<< " 1 OR 1 ="<<(1||1)<<" |"<<" 1 OR 1 AND 1 OR 1 =  "<<(1 || 0 && 1 || 1)<<" |"<<endl;
	cout<<"|1|1|0|"<<"1 OR 1 ="<<(1||1)<<" |"<< " 1 OR 0 ="<<(1||0)<<" |"<<" 1 OR 0 AND 1 OR 0 =  "<<(1 || 1 && 1 || 0)<<" |"<<endl;
	cout<<"|1|1|1|"<<"1 OR 1 ="<<(1||1)<<" |"<< " 1 OR 1 ="<<(1||1)<<" |"<<" 1 OR 1 AND 1 OR 1 =  "<<(1 || 1 && 1 || 1)<<" |"<<endl;
	cout<<"+=====================================================+"<<endl;
	
	return 0;
	
	
}
