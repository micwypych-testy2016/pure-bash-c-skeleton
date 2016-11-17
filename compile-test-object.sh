mkdir -p build
g++ -c -Ilib/cpputest/include -Iinclude tests/AllTests.cpp -o build/AllTests.o
g++ -c -Ilib/cpputest/include -Iinclude tests/LibraryTest.cpp -o build/LibraryTest.o
