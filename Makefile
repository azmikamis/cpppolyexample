INCLUDE_PATH=D:\cplusplus-workspace\cpppolyexample\include

all:
	g++ poly.cpp animal.cpp human.cpp pet.cpp -o poly -I${INCLUDE_PATH}
