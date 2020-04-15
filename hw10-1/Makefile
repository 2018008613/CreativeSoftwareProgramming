HW1 = class_function
HW2 = $(HW1)_main
HW3 = cast_quiz
HW4 = dynamic_cast
HW5 = $(HW4)_main
HW6 = shapes
HW7 = $(HW6)_main

all: $(HW1).o $(HW2).o $(HW3).o $(HW5).o $(HW6).o $(HW7).o
	g++ -std=c++11 -o $(HW1) $(HW1).o $(HW2).o
	g++ -o $(HW3) $(HW3).o
	g++ -std=c++11 -o $(HW4) $(HW5).o
	g++ -std=c++11 -o $(HW6) $(HW6).o $(HW7).o

$(HW1).o: $(HW1).cc
	g++ -c -o $(HW1).o $(HW1).cc

$(HW2).o: $(HW2).cc
	g++ -std=c++11 -c -o $(HW2).o $(HW2).cc

$(HW3).o: $(HW3).cc
	g++ -c -o $(HW3).o $(HW3).cc

$(HW5).o: $(HW5).cc
	g++ -std=c++11 -c -o $(HW5).o $(HW5).cc

$(HW6).o: $(HW6).cc
	g++ -c -o $(HW6).o $(HW6).cc

$(HW7).o: $(HW7).cc
	g++ -std=c++11 -c -o $(HW7).o $(HW7).cc

clean:
	rm $(HW1).o $(HW2).o $(HW1) $(HW3).o $(HW3) $(HW5).o $(HW4) $(HW6).o $(HW7).o $(HW6)

submit: $(HW1).cc $(HW2).cc $(HW1).h $(HW3).cc $(HW4).h $(HW5).cc $(HW6).cc $(HW6).h $(HW7).cc Makefile
	git add $(HW1).cc $(HW2).cc $(HW1).h $(HW3).cc $(HW4).h $(HW5).cc $(HW6).cc $(HW6).h $(HW7).cc Makefile
	git commit -m "hw10-1 complete"
	git push origin master
