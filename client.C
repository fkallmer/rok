/*
 * client.C
 *
 *  Created on: 11.09.2019
 *      Author: aml
 */

#include <string>
#include <iostream>
#include <unistd.h> //contains various constants


#include "SIMPLESOCKET.H"
#include "TASK1.H"

using namespace std;



int main() {
	srand(time(NULL));
	TCPclient c;
	string host = "localhost";
	string msg;
	string pwdLength,numberSymbols,pwd;


	//connect to host
	c.conn(host , 2025);
	std::cout<<"Passwortlänge: ";
	std::cin>>pwdLength;
	std::cout<<"Alphabethlänge: ";
	std::cin>>numberSymbols;
	msg = "makepwd[,]";
	msg.insert(8,pwdLength);
	msg.insert(10,numberSymbols);
	cout<<"msg: "<<msg<<endl;
	c.sendData(msg);
	msg="pwd[]";
	std::cin>>pwd;
	msg.insert(4,pwd);
	msg.insert(4," ");
	cout<<"msg: "<<msg<<endl;
	c.sendData(msg);

	int i=0;
	bool goOn=1;
	while(goOn){ // send and receive data

		msg = c.receive(32);
		cout << "got response:" << msg << endl;
		sleep(1);

	}
}


