//============================================================================
// Name        : INF3_Prak.cpp
// Author      : TEAM ROK
// Version     :
// Copyright   :
// Description : Hello World in C, Ansi-style
//============================================================================

#include <string>
#include <iostream>

#include <cstdio>      /* printf, NULL */
#include <cstdlib>     /* srand, rand */
#include <ctime>       /* time */

#include <unistd.h>
<<<<<<< HEAD
#include <math.h>

#include "SHA256.H"
#include "TASK1.H"


using namespace std;
using namespace TASK1;


class MyBlackBoxSafe : public BlackBoxSafe{
	/// \todo  Implementation of class BlackBoxSafe needs to be finalized.
public:
	MyBlackBoxSafe(int pwdLength, int symbSetSize) : BlackBoxSafe(pwdLength, symbSetSize){
		pwd_=sha256(pwd_);
	};
	string input(string strPwd){
		strPwd=sha256(strPwd);
	if(strPwd.compare(pwd_) == 0){
			return string("ACCESS ACCEPTED");
		}
		return string("ACCESS DENIED");
	};
};

int main(){
	/*demoTASK1_00();
	BlackBoxUnsafe b(5,-3);

	cout << "Password erraten?: "<<b.input(b.pwd_) << endl;
	*/
	//demoTASK1_00();
	MyBlackBoxSafe b(4,4);

//	cout << "Password erraten?: "<<b.input(b.pwd_) << endl;
	string s;
	char symbo[4] = {'A','B','C','D'};
	char pwd [5];
	int szs = sizeof(symbo);
	int szp = sizeof(pwd);


	int g = pow(szs,szp);
	for(int i = 0; i<g;i++)
	{

		for (int e = 0; e<szp;e++)
		{
			int o = pow(szs,szp-1-e);
			int mod = (i/o)%szs;
			pwd[e]= symbo[mod];

		}
		s = string(pwd);
		cout<<"STRING: (" <<i+1<<") "<<s<<endl;

	}




=======

#include "SHA256.H"
#include "TASK1.H"
#include "TASK2.H"
#include "TASK3.H"
#include "TASK4.H"
#include "TASK5.H"
#include "TASK6.H"

using namespace std;


int main(){
	srand(time(nullptr));
>>>>>>> e1836d9b7814762fe033ec55862870e48a6a8cae

    return 0;
}




<<<<<<< HEAD
=======

>>>>>>> e1836d9b7814762fe033ec55862870e48a6a8cae
