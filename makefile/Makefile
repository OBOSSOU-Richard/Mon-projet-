	CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

# Target executable
TARGET = app

# Souces files 
SRCS = main.cpp Accumulator.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Default rule 
all: $(TARGET)

# Link
$(TARGET): $(OBJS)
$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile
%.o: %.cpp Accumulator.h
	$(CXX) $(CXXFLAGS)  -c $< -O $@

# Clean
Clean:
	rm -f $(OBJS) $(TARGET)