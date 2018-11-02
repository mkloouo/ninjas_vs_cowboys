CPP := $(shell which g++)
CPPFLAGS := -Wall -Werror -Wextra -pedantic -std=c++11

NAME := ninja_vs_cowboys

SRC_DIR := source
INC_DIR := include
OBJ_DIR := objects

SRC_EXT := cpp
INC_EXT := h
OBJ_EXT := o

SRCS := $(shell find $(SRC_DIR) -type f -name "*.$(SRC_EXT)")
INCS := $(shell find $(INC_DIR) -type f -name "*.$(INC_EXT)")
OBJS := $(patsubst $(SRC_DIR)%.$(SRC_EXT),$(OBJ_DIR)%.$(OBJ_EXT),$(SRCS))
OBJ_DIRS := $(sort $(dir $(OBJS)))

DEPS := $(SRCS) $(INCS)

INC_FLAGS := -I $(INC_DIR)
LNK_FLAGS :=

all: $(NAME)

clean:
	rm -fr $(OBJ_DIR)
	rm -fr $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIRS)

$(OBJ_DIR)/%.$(OBJ_EXT): $(SRC_DIR)/%.$(SRC_EXT) | $(OBJ_DIR)
	$(CPP) $(CPPFLAGS) $(INC_FLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(INC_FLAGS) $(LNK_FLAGS) $^ -o $@
