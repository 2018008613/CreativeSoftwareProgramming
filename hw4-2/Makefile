HW1 = linked_list
HW2 = my_list

all: $(HW1).o $(HW2).o
	g++ -o $(HW2) $(HW1).o $(HW2).o

$(HW1).o: $(HW1).cc
	g++ -c -o $(HW1).o $(HW1).cc

$(HW2).o: $(HW2).cc
	g++ -c -o $(HW2).o $(HW2).cc

clean:
	rm $(HW1).o $(HW2).o $(HW2)

submit: $(HW1).cc $(HW2).cc $(HW1).h Makefile
	git add $(HW1).cc $(HW2).cc $(HW1).h Makefile
	git commit -m "hw4-2 complete"
	git push origin master

