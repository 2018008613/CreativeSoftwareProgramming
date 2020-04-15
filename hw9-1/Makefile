HW1 = classes
HW2 = $(HW1)_main
HW3 = print_info
HW4 = $(HW3)_main
HW5 = print_member
HW6 = $(HW5)_main

all: $(HW1).o $(HW2).o $(HW3).o $(HW4).o $(HW5).o $(HW6).o
	g++ -std=c++11 -o $(HW1) $(HW1).o $(HW2).o
	g++ -std=c++11 -o $(HW3) $(HW3).o $(HW4).o
	g++ -std=c++11 -o $(HW5) $(HW5).o $(HW6).o

$(HW1).o: $(HW1).cc
	g++ -c -o $(HW1).o $(HW1).cc

$(HW2).o: $(HW2).cc
	g++ -std=c++11 -c -o $(HW2).o $(HW2).cc

$(HW3).o: $(HW3).cc
	g++ -c -o $(HW3).o $(HW3).cc

$(HW4).o: $(HW4).cc
	g++ -std=c++11 -c -o $(HW4).o $(HW4).cc

$(HW5).o: $(HW5).cc
	g++ -c -o $(HW5).o $(HW5).cc

$(HW6).o: $(HW6).cc
	g++ -std=c++11 -c -o $(HW6).o $(HW6).cc

clean:
	rm $(HW1).o $(HW2).o $(HW1) $(HW3).o $(HW4).o $(HW3) $(HW5).o $(HW6).o $(HW5)

submit: $(HW1).cc $(HW2).cc $(HW1).h $(HW3).cc $(HW4).cc $(HW3).h $(HW5).cc $(HW6).cc $(HW5).h Makefile
	git add $(HW1).cc $(HW2).cc $(HW1).h $(HW3).cc $(HW4).cc $(HW3).h $(HW5).cc $(HW6).cc $(HW5).h Makefile
	git commit -m "hw9-1 complete"
	git push origin master
