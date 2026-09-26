#include <iostream>
#include <string>
using namespace std;

int main(){
	string name;
	cout<<"Please enter your name"<<endl;
	cin>>name;
	int m_number;
	cout<<"Please enter your matric number"<<endl;
	cin>>m_number;
	short age;
	cout<<"Please enter your Age"<<endl;
	cin>>age;
	int TS_1;
	cout<<"Please enter 1st Test Score"<<endl;
	cin>>TS_1;
	int TS_2;
	cout<<"Please enter 2nd test score"<<endl;
	cin>>TS_2;
	int AS;
	cout<<"Please enter Assignment score"<<endl;
	cin>>AS;
	int ES;
	cout<<"Please enter Exam score"<<endl;
	cin>>ES;
	int SF;
	cout<<"Please enter total school fee"<<endl;
	cin>>SF;
	double Percent_paid;
	cout<<"Please enter Percentage of school fee already paid"<<endl;
	cin>>Percent_paid;

    int CA = TS_1 + TS_2 + AS;
    int Final_score = CA + ES;
    int FS = Final_score;
    double Average_CA = CA / 3;
    double ACA = Average_CA ;
    long double Amount_Paid = SF * (Percent_paid / 100);
    long double AP = Amount_Paid;
	long double Outstanding_Balance = SF - AP; 
	long double OP = Outstanding_Balance; 
	
	cout<<"=============================================="<<endl;
	cout<<"          STUDENT PERFORMANCE SYSTEM          "<<endl;
	cout<<"=============================================="<<endl<<endl<<endl<<endl;
	cout<<"Name:                  "<<name<<endl;
	cout<<"Matric number:         "<<m_number<<endl;
	cout<<"Age:                   "<<age<<endl;
	cout<<"Test 1:                "<<TS_1<<endl;
	cout<<"Test 2:                "<<TS_2<<endl;
    cout<<"Assignment:            "<<AS<<endl;	
    cout<<"CA score:              "<<CA<<endl;
    cout<<"Avetage CA:            "<<ACA<<endl;
    cout<<"Exam score:            "<<ES<<endl;
    cout<<"Final score1:          "<<FS<<endl<<endl;
    cout<<"School Fee:            "<<SF<<endl;
    cout<<"Percentage Paid:       "<<Percent_paid<<"%"<<endl;
    cout<<"Amount Paid:           "<<AP<<endl;
    cout<<"Outstanding:           "<<OP<<endl;
    
    
}