objects = stock00.o usetock00.o

main : $(objects)
	g++ -o main $(objects)

$(objects) : stock00.h

.PHONY : clean

clean :
	-rm main $(objects)
