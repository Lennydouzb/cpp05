CXX=c++
CXXFLAGS = -Wall -Werror -Wextra -g -std=c++98
NAME = bureau
SRC_DIR = ./
SRCS = $(SRC_DIR)main.cpp \
	   $(SRC_DIR)Bureaucrat.cpp\
	   $(SRC_DIR)AForm.cpp\
	   $(SRC_DIR)RobotomyRequestForm.cpp\
	   $(SRC_DIR)PresidentialPardonForm.cpp\
	   $(SRC_DIR)ShrubberyCreationForm.cpp\
	   $(SRC_DIR)Intern.cpp\

OBJ_DIR = .build/
OBJS = $(SRCS:$(SRC_DIR)%.cpp=$(OBJ_DIR)%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) $< -c -o $@

fclean: clean
	rm -f $(NAME)

clean:
	rm -rf $(OBJ_DIR)

re: fclean all

.PHONY: all fclean clean re
