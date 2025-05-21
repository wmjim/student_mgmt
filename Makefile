cc = gcc
CFLAGS = -Wall -g
OBJS = main.o student.o  file_io.o menu.o utils.o

all: student_mgmt

student_mgmt: $(OBJS)
	$(CC) -o $@ $^

clean:
	rm -f *.o student_mgmt student.dat log.txt