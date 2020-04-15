HW1 = simply_linked_list
HW2 = $(HW1)_main
HW3 = my_shared_ptr
HW4 = $(HW3)_main

all: $(HW2).o $(HW4).o
	g++ -std=c++11 -o $(HW1) $(HW2).o
	g++ -std=c++11 -o $(HW3) $(HW4).o

$(HW2).o: $(HW2).cc
	g++ -std=c++11 -c -o $(HW2).o $(HW2).cc

$(HW4).o: $(HW4).cc
	g++ -std=c++11 -c -o $(HW4).o $(HW4).cc

clean:
	rm $(HW2).o $(HW1) $(HW4).o $(HW3)

submit: $(HW2).cc $(HW1).h $(HW4).cc $(HW3).h Makefile
	git add $(HW2).cc $(HW1).h $(HW4).cc $(HW3).h Makefile
	git commit -m "hw12-2 complete"
	git push origin master
