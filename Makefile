NAME = libasm.a

EJECUTABLE = libasm

SRCS = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s

MAIN = main.c

INCLUDE = .

NASM = ./nasm -f macho64

GCC = gcc -Wextra -Werror -Wall

CLEAN = rm -f

OBJS = ${SRCS:.s=.o}

.s.o: $(SRCS)
	$(NASM) $^

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS) 
	
run:	
	$(GCC) $(OBJS) $(MAIN) -I$(INCLUDE) $(NAME) -o $(EJECUTABLE) 
	./$(EJECUTABLE)

clean:
	$(CLEAN) $(OBJS)

fclean: clean
	$(CLEAN) $(NAME) $(EJECUTABLE)

re: fclean all

.PHONY: run clean re run all fclean
