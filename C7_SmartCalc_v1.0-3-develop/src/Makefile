FLAGS = -Wall -Wextra -Werror -std=c11 #-fsanitize=address
LFLAGS = -lcheck -lpthread -lm
SOURCES=s21_calc_tools_stack.c s21_calc_tools_validator.c
OBJECTS=s21_*.o
TARGET=Mycalc

ifeq ($(shell uname -s), Linux)
	LFLAGS = -lpthread -lcheck -lsubunit -lm 
endif

all: install

install:
	echo "Installation of Mycalc.app:"
	mkdir -p ../build
	cd ./my_calc && qmake && make && make clean && rm -rf Makefile && mv my_calc.app ../../build/$(TARGET).app
	echo "Installation completed! You can find app in the ../build/ folder!"

checks:
	clang-format -n *.c *.h
	clang-format -style="{BasedOnStyle: Google}" -i *.c
	clang-format -style="{BasedOnStyle: Google}" -i *.h
	cppcheck enable=all missingIncludeSystem *.c

uninstall:
	rm -rf ../build
	echo "Uninstall completed!"

dist: install
	mkdir -p ../dist
	cp -R ../build/$(TARGET).app ../dist
	cd ../dist && tar cvzf $(TARGET).tgz *
	cd ../dist && rm -rf $(TARGET).app
	echo "Archive creation completed successfully!"

dvi:
	doxygen Doxyfile
	open ./html/index.html

gcov_report: clean add_coverage test
	./test.out
	lcov -t "test" -o test.info -c -d .
	genhtml -o report test.info
	open report/index.html

#make:
#	gcc *.c # -fsanitize=address после Wextra для утечек
#	./a.out

test: clean
	gcc $(FLAGS) $(SOURCES) -c test.c						
	gcc test.o $(FLAGS) $(OBJECTS) $(LFLAGS) -o test.out
	rm -rf *.o
	clear
	./test.out

s21_my_calc.a:
	gcc $(FLAGS) -c $(SOURCES)
	ar rc s21_my_calc.a $(OBJECTS)
	ranlib s21_my_calc.a

clean:
	rm -rf *.o gcov_report *.a test *.out s21_my_calc.a