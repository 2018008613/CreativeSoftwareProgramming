all: struct_person.o array_struct_point.o array_struct_person.o
	g++ -o struct_person struct_person.o
	g++ -o array_struct_point array_struct_point.o
	g++ -o array_struct_person array_struct_person.o

struct_person.o: struct_person.cc
	g++ -c -o struct_person.o struct_person.cc

array_struct_point.o: array_struct_point.cc
	g++ -c -o array_struct_point.o array_struct_point.cc

array_struct_person.o: array_struct_person.cc
	g++ -c -o array_struct_person.o array_struct_person.cc

clean:
	rm struct_person.o struct_person array_struct_point.o array_struct_point array_struct_person.o array_struct_person

submit: struct_person.cc array_struct_point.cc array_struct_person.cc Makefile
	git add struct_person.cc array_struct_point.cc array_struct_person.cc Makefile
	git commit -m "hw3-1 complete"
	git push origin master
