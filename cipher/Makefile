CXX = g++
CXXFLAGS = -std=c++17 -Wall -O2
LDFLAGS = -lcryptopp

TARGET = cipher_program
SRC = cipher_program.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC) $(LDFLAGS)

clean:
	rm -f $(TARGET)
