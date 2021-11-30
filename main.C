//============================================================================
// Name        : INF3_Prak.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C, Ansi-style
//============================================================================

#include <string>
#include <iostream>

#include <cstdio>      /* printf, NULL */
#include <cstdlib>     /* srand, rand */
#include <ctime>       /* time */

#include <unistd.h>

#include "SHA256.H"
#include "TASK1.H"
#include "TASK2.H"
#include "TASK3.H"
#include "TASK4.H"
#include "TASK5.H"
#include "TASK6.H"

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

	cout << "Password erraten?: "<<b.input(b.pwd_) << endl;



    return 0;
}




