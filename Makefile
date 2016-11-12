all: Driver.o Country.o Continent.o
	g++ -g -Wall Driver.o Country.o Continent.o -o Driver.out

driver.o: Driver.cpp Continent.o Country.o
	g++ -Wall -c driver.cpp

Continent.o: Continent.cpp Continent.h Country.o
	g++ -Wall -c Continent.cpp

Country.o : Country.cpp
	g++ -Wall -c Country.cpp

# -f removes any error messages if the file is not present
clean:
	rm -rf *.o
	rm -f *.out
	rm -f *~ *.h.gch *#

run:
	./Driver.out
