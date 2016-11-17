mkdir -p build
g++ -c -Ilib/cpputest/include tests/AllTests.cpp -o build/AllTests.o
g++ -c -Ilib/cpputest/include tests/LibraryTest.cpp -o build/LibraryTest.o
