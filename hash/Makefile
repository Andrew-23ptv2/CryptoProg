CXX = g++
CXXFLAGS = -std=c++17 -Wall -O2
LDFLAGS = -lcryptopp

TARGET = hash_program
SRC = hash_program.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC) $(LDFLAGS)

clean:
	rm -f $(TARGET)
