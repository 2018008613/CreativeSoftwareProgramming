HW1 = touch_points
HW2 = cal_complex

all: $(HW1).o $(HW2).o
	g++ -o $(HW1) $(HW1).o
	g++ -o $(HW2) $(HW2).o

$(HW1).o: $(HW1).cc
	g++ -c -o $(HW1).o $(HW1).cc

$(HW2).o: $(HW2).cc
	g++ -c -o $(HW2).o $(HW2).cc

clean:
	rm $(HW1).o $(HW1) $(HW2).o $(HW2)

submit: $(HW1).cc $(HW2).cc Makefile
	git add $(HW1).cc $(HW2).cc Makefile
	git commit -m "hw3-3 complete"
	git push origin master

