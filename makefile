GTEST_DIR = ~/googletest/googletest

my_test: test_case.c string.c string.h Gtest_main.c libgtest.a
	g++ -isystem $(GTEST_DIR)/include -pthread test_case.c string.c string.h Gtest_main.c libgtest.a -o my_test

libgtest.a: gtest-all.o
	ar -rv libgtest.a gtest-all.o
	
gtest-all.o:
	g++ -isystem $(GTEST_DIR)/include -I $(GTEST_DIR) -pthread -c $(GTEST_DIR)/src/gtest-all.cc

clean:
	rm my_test *.o libgtest.a
