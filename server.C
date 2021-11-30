/*
 * server.C
 *
 *  Created on: 11.09.2019
 *      Author: aml
 */
#include <cstdio> // standard input and output library
#include <cstdlib> // this includes functions regarding memory allocation
#include <cstring> // contains string functions
#include <cerrno> //It defines macros for reporting and retrieving error conditions through error codes
#include <ctime> //contains various functions for manipulating date and time

#include <unistd.h> //contains various constants
#include <sys/types.h> //contains a number of basic derived types that should be used whenever appropriate
#include <arpa/inet.h> // defines in_addr structure
#include <sys/socket.h> // for socket creation
#include <netinet/in.h> //contains constants and structures needed for internet domain addresses
#include <iostream>

#include "SIMPLESOCKET.H"

class MyServer : public TCPserver{
public:
	MyServer(int portNmb, int maxSizeData) : TCPserver(portNmb,maxSizeData){};

protected:
	string myResponse(string inputStr);
};

int main(){
	srand(time(nullptr));
	MyServer srv(2026,25);
	srv.run();
}

string MyServer::myResponse(string inputStr){
	char pwdLength[99],numberSymbols[99],pwd[99];
	string response;
	if(sscanf(inputStr.c_str(),"makepwd[%s ,%s ]",pwdLength,numberSymbols)){
		response="Password mit der Länge  und einer Alphabetlänge  erstellt!\n";
		response.insert(24,pwdLength);
		response.insert(51,numberSymbols);

	}else if(sscanf(inputStr.c_str(),"pwd[%s ]",pwd)){
		response="Password: ";
		response.append(pwd);
		response.append(" ist richtig/falsch\n");
	}else{
		response="Unknown Command!\n";
	}

	return response;
	/*
	if(inputStr.compare(0,4,"eins") == 0){
		return string("1");
	}else if(inputStr.compare(0,4,"zwei") == 0){
		return string("2");
	}else if(inputStr.compare(0,4,"drei") == 0){
		return string("3");
	}else if(inputStr.compare(0,4,"vier") == 0){
		return string("4");
	}else if(inputStr.compare(0,5,"fuenf") == 0){
		return string("5");
	}else if(inputStr.compare(0,5,"sechs") == 0){
		return string("6");
	}else if(inputStr.compare(0,6,"sieben") == 0){
		return string("7");
	}else if(inputStr.compare(0,4,"acht") == 0){
		return string("8");
	}else if(inputStr.compare(0,4,"neun") == 0){
		return string("9");
	}else if(inputStr.compare(0,4,"null") == 0){
		return string("0");
	}else{
		return string("UC");
	}
*/


}

