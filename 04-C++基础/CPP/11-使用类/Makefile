objects = mytime0.o usetime0.o

main : $(objects)
	g++ -o main $(objects)
$(objects) : mytime0.h

.PHONY : clean
clean :
	-rm main $(objects)
