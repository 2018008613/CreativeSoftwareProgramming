HW1 = world_clock
HW2 = $(HW1)_main
HW3 = calendar
HW4 = $(HW3)_main

all: $(HW1).o $(HW2).o $(HW3).o $(HW4).o
	g++ -std=c++11 -o $(HW1) $(HW1).o $(HW2).o
	g++ -std=c++11 -o $(HW3) $(HW3).o $(HW4).o

$(HW1).o: $(HW1).cc
	g++ -std=c++11 -c -o $(HW1).o $(HW1).cc

$(HW2).o: $(HW2).cc
	g++ -std=c++11 -c -o $(HW2).o $(HW2).cc

$(HW3).o: $(HW3).cc
	g++ -std=c++11 -c -o $(HW3).o $(HW3).cc

$(HW4).o: $(HW4).cc
	g++ -std=c++11 -c -o $(HW4).o $(HW4).cc

clean:
	rm $(HW1).o $(HW2).o $(HW1) $(HW3).o $(HW4).o $(HW3)

submit: $(HW1).cc $(HW2).cc $(HW1).h $(HW3).cc $(HW4).cc $(HW3).h Makefile
	git add $(HW1).cc $(HW2).cc $(HW1).h $(HW3).cc $(HW4).cc $(HW3).h Makefile
	git commit -m "hw11-2 complete"
	git push origin master
