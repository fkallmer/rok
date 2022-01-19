CC=g++

CFLAGS=$(shell pkg-config --cflags opencv) 
LIBS=$(shell pkg-config --libs opencv) 

<<<<<<< HEAD
OBJS= main.o  TASK1.o SHA256.o SIMPLESOCKET.o
DEMOTARGET=main server client 
=======
OBJS= main.o  TASK1.o TASK2.o TASK3.o TASK4.o TASK5.o SHA256.o SIMPLESOCKET.o
DEMOTARGET=main server client mainTest
>>>>>>> e1836d9b7814762fe033ec55862870e48a6a8cae

client.o:	client.C
	$(CC) -c $<  -std=c++11

server.o:	server.C
	$(CC) -c $<  -std=c++11

SIMPLESOCKET.o:	SIMPLESOCKET.C
	$(CC) -c $<  -std=c++11

SHA256.o:	SHA256.C
	$(CC) -c $<  -std=c++11

TASK1.o:	TASK1.C
	$(CC) -c $<  -std=c++11

<<<<<<< HEAD
main.o:	main.C
	$(CC) -c $<  -std=c++11	

		
=======
TASK2.o:	TASK2.C
	$(CC) -c $<  -std=c++11

TASK3.o:	TASK3.C
	$(CC) -c $<  -std=c++11

TASK4.o:	TASK4.C
	$(CC) -c $<  -std=c++11 

TASK5.o:	TASK5.C
	$(CC) -c $<  -std=c++11 

main.o:	main.C
	$(CC) -c $<  -std=c++11	

mainTest.o:	mainTest.C
	$(CC) -c $<  -std=c++11		
>>>>>>> e1836d9b7814762fe033ec55862870e48a6a8cae



main:	$(OBJS)
	$(CC) -o $@ $^ -L/usr/lib/x86_64-linux-gnu -ldl -lstdc++  -std=c++11 -lpthread $(LIBS)

<<<<<<< HEAD

server:	server.o
	$(CC) -o server server.o  SIMPLESOCKET.o SHA256.o TASK1.o -L/usr/lib/x86_64-linux-gnu -ldl -lstdc++  -std=c++11

client:	client.o
	$(CC) -o client client.o SIMPLESOCKET.o  -L/usr/lib/x86_64-linux-gnu -ldl -lstdc++  -std=c++11
=======
mainTest:	mainTest.o
	$(CC) -o $@ $^ TASK1.o SHA256.o -L/usr/lib/x86_64-linux-gnu -ldl -lstdc++  -std=c++11 -lpthread $(LIBS)

server:	server.o
	$(CC) -o server server.o  SIMPLESOCKET.o -L/usr/lib/x86_64-linux-gnu -ldl -lstdc++  -std=c++11

client:	client.o
	$(CC) -o client client.o SIMPLESOCKET.o -L/usr/lib/x86_64-linux-gnu -ldl -lstdc++  -std=c++11
>>>>>>> e1836d9b7814762fe033ec55862870e48a6a8cae

clean:
	-rm -r -f   $(DEMOTARGET) *.o DOXYGENDOC  *.txt

doc:
	doxygen Doxyfile 


all:	$(DEMOTARGET)
<<<<<<< HEAD
	make clean  && make main && make server && make client 
=======
	make clean  && make main && make server && make client && make mainTest
>>>>>>> e1836d9b7814762fe033ec55862870e48a6a8cae

run:	main	
	./main

